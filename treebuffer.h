#ifndef TREEBUFFER_H
#define TREEBUFFER_H

#include "vertexbuffer.h"

class treebuffer: public VertexBuffer
{
public:
    treebuffer();
    void init() override;
};

#endif // TREEBUFFER_H
