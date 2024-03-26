#ifndef TREE2BUFFER_H
#define TREE2BUFFER_H

#include "vertexbuffer.h"

class tree2buffer: public VertexBuffer
{
public:
    tree2buffer();
    void init() override;
};

#endif // TREE2BUFFER_H
