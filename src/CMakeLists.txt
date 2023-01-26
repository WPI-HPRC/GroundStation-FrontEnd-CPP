include_directories(../includes)
include(C:/vcpkg/scripts/buildsystems/vcpkg.cmake)
include(FetchContent) #Cmake Module to fetch libraries

# Fetch imgui, glad, and glm
set(BUILD_SHARED_LIBS OFF)
FetchContent_Declare(
        imgui-glfw-glad-glm
        GIT_REPOSITORY https://github.com/cmmw/imgui-glfw-glad-glm.git
        GIT_TAG v3.3.4
)

FetchContent_MakeAvailable(imgui-glfw-glad-glm)

add_executable(Ground_Station main.cpp GLFW/GLFWindow.cpp GLFW/GLFWindow.h settings.h)
target_link_libraries(Ground_Station imgui glm)

#target_link_libraries(Ground_Station_Frontend_CPP PRIVATE glfw GLEW::GLEW opengl32 gdi32 imm32 IMGUI)