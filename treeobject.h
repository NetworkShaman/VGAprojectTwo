#ifndef TREEOBJECT_H
#define TREEOBJECT_H

#include "graphicalobject.h"

class treeobject : public GraphicalObject
{
public:
    treeobject(ShaderProgram* program, VertexBuffer* buffer, ObjectProperty property);
    void render(QMatrix4x4 transformationMatrix) override;
};

#endif // TREEOBJECT_H
