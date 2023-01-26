#pragma once

#define GLFW_INCLUDE_GLU
#define GLFW_EXPOSE_NATIVE_WGL
#define GLFW_EXPOSE_NATIVE_WIN32

#include <GLFW/glfw3.h>

//#include <windows.h>
#include <iostream>

class GLFWindow {
public:
    int windowInit();
    GLFWwindow* window;
    char * glsl_version;
private:

    int destroyWindow(GLFWwindow* win);
    static void glfw_error_callback(int error, const char* description);
};