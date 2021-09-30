#pragma once

#include "LveWindow.hpp"
#include "LvePipeline.hpp"

namespace lve {
    class FirstApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;


        void run();
    private:
        LveWindow lveWindow{WIDTH, HEIGHT, "Vulkan Skipex, lets skip stuff :) "};
        LvePipeline lvePipeline{"../shaders/simple_shader.vert.spv", "../shaders/simple_shader.frag.spv"};
    };
}