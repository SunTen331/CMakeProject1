import os, enum, subprocess

class Platform(enum.Enum):
    WINDOWS = 1
    LINUX = 2

# Get platform: WINDOWS or LINUX
platform = Platform.LINUX
if (os.name == "nt"): platform = Platform.WINDOWS

# Create build folder if not exist
current_directory = os.path.dirname(os.path.abspath(__file__))
build_directory = os.path.join(os.path.dirname(current_directory), r'build')
if not os.path.exists(build_directory): os.makedirs(build_directory)

# Cmake build command
commands = "\
    cd ./App/build/; \
    rm -r *; \
    cmake -G 'Unix Makefiles' ../source; \
    cmake --build ."
if (platform == Platform.WINDOWS):
    commands = "powershell; " + commands

# Execute command
subprocess.run(commands, shell=True)
