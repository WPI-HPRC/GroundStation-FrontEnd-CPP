#include "GLFWindow.h"

int GLFWindow::windowInit() {
    if(!glfwInit()) {
        std::cerr << "[ERROR] GLFW Failed to Initialize" << std::endl;
        glfwTerminate();
        return -1;
    }

    window = glfwCreateWindow(640, 480, "Ground Station", NULL, NULL);

    if(!window) {
        std::cerr << "[ERROR] GLFW Failed to Initialize!" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)) {
        destroyWindow(window);
    }

    glfwPollEvents();
};

int GLFWindow::destroyWindow(GLFWwindow* win) {
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(win);
    glfwPollEvents();

    return 0;
};

void GLFWindow::key_callback(GLFWwindow *window, int key, int scancode, int action, int mods) {
    if(key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        std::cout << "CHEESE" << std::endl;
    }
}