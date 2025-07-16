cmake_minimum_required(VERSION 3.10)
project(CodeQLDemo)

set(CMAKE_CXX_STANDARD 14)

# Include all source files from src/
file(GLOB SOURCES "src/*.cpp")

# Create an executable using all source files
add_executable(myapp ${SOURCES})