cmake_minimum_required(VERSION 3.10)
project(DataBridgePro)

set(CMAKE_CXX_STANDARD 17)

# Include directories for your project headers
include_directories(include)

# Add the RapidJSON library to the include path
include_directories(${CMAKE_SOURCE_DIR}/rapidjson/include)

# Source files
set(SOURCES
        src/main.cpp
        src/DataConverter.cpp
        src/BinaryParser.cpp
        src/Logger.cpp
)

# Executable
add_executable(DataBridgePro ${SOURCES})
