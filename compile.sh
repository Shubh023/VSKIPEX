#!/bin/sh

/usr/bin/glslc shaders/simple_shader.vert -o shaders/simple_shader.vert.spv
/usr/bin/glslc shaders/simple_shader.frag -o shaders/simple_shader.frag.spv
