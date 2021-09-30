#include "lve_window.hpp"

namespace lve {

    LveWindow::LveWindow(int _width, int _height, std::string _windowName) : width(_width), height(_height), windowName(_windowName) {
        initWindow();
    };

    LveWindow::~LveWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void LveWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}
