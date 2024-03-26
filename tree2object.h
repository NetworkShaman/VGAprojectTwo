#ifndef TREE2OBJECT_H
#define TREE2OBJECT_H

#include "graphicalobject.h"

class tree2object : public GraphicalObject
{
public:
    tree2object(ShaderProgram* program, VertexBuffer* buffer, ObjectProperty property);
    void render(QMatrix4x4 transformationMatrix) override;
};

#endif // TREE2OBJECT_H
