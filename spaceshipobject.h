#ifndef SPACESHIPOBJECT_H
#define SPACESHIPOBJECT_H

#include "graphicalobject.h"

class SpaceshipObject : public GraphicalObject
{
public:
    SpaceshipObject(ShaderProgram* program, VertexBuffer* buffer, ObjectProperty property);
    void render(QMatrix4x4 transformationMatrix) override;
};

#endif // SPACESHIPOBJECT_H
