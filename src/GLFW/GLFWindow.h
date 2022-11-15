#pragma once


#include <glfw3.h>
#include <windows.h>
#include <iostream>

class GLFWindow {
public:
    int windowInit();
private:

    int destroyWindow(GLFWwindow* win);
    void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

    GLFWwindow* window;
};