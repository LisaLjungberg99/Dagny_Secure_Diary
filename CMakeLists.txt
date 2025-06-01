
cmake_minimum_required(VERSION 3.22)

project(Dagny_Secure_Diary)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Dagny_Secure_Diary main.cpp)
## Skapar en exekverbar fil (program) med namnet Dagny_Secure_Diary, och anger att main.cpp är källfilen som ska kompileras.

target_compile_options(Dagny_Secure_Diary PRIVATE
        -Wall        # Visa alla vanliga varningar
        -Wextra      # Visa extra varningar
        -Wpedantic   # Följ standarden strikt
        -Wconversion # Varning vid farliga typkonverteringar
        -Wshadow     # Varning om variabler skuggar andra
        -Werror      # Gör alla varningar till fel
)