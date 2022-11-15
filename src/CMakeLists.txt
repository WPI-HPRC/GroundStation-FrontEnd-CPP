include_directories(../includes)

add_executable(Ground_Station_Frontend_CPP main.cpp GLFW/GLFWindow.cpp GLFW/GLFWindow.h)

target_link_libraries(Ground_Station_Frontend_CPP glfw3 glfw3dll opengl32 gdi32)