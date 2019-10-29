#ifndef MSCFINALPROJECT_RENDER_RENDERMANAGER_HPP
#define MSCFINALPROJECT_RENDER_RENDERMANAGER_HPP

#include <string>

namespace RenderManager {
    bool createGraphicsPipeline(const std::string& name);
    uint32_t getPipelineID(const std::string& name);

    void bindPipeline(uint32_t id);

    void draw(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);

    bool loadShaders();
    void unloadShaders();
    bool reloadShaders();
}

#endif//MSCFINALPROJECT_RENDER_RENDERMANAGER_HPP