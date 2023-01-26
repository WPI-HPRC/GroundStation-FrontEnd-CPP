#include "GLFWindow.h"
//#include "glad/gl.h"

int GLFWindow::windowInit() {

    //Include Error Callback Function, will catch and yeet errors
    glfwSetErrorCallback(this->glfw_error_callback);

    //Initialize OpenGL and catch init failures
    if(!glfwInit()) {
        glfwTerminate();
        return -1;
    }

    //Set OpenGL Versioning
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //Create a default window with a 640x480 resolution
    window = glfwCreateWindow(640, 480, "Ground Station", NULL, NULL);

    //Check if window has opened
    if(!window) {
        std::cerr << "[ERROR] GLFW Failed to open window!" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    glfwSwapInterval(1); // Enable or Disable VSync

    //Load GLAD
//    if (!gladLoaderLoadGL())
//        throw std::runtime_error("Error initializing glad");
}

int GLFWindow::destroyWindow(GLFWwindow* win) {
    glfwSwapBuffers(win);
    glfwPollEvents();

    return 0;
}

void GLFWindow::glfw_error_callback(int error, const char *description) {
    fprintf(stderr, "[ERROR]: %d: %s\n", error, description);
}