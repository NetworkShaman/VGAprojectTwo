#ifndef GRAPHICALOBJECT_H
#define GRAPHICALOBJECT_H

#include "shaderprogram.h"
#include "vertexbuffer.h"
#include "objectProperty.h"

class GraphicalObject
{
protected:
    ShaderProgram* m_program;
    VertexBuffer* m_buffer;
    ObjectProperty m_property;

public:
    GraphicalObject(ShaderProgram* program, VertexBuffer* buffer, ObjectProperty property);
    virtual void render(QMatrix4x4 transformationMatrix) = 0;
    Position getPosition(){ return m_property.position; }
    Rotation getRotation(){ return m_property.rotation; }
    Rotation getScale(){ return m_property.scale; }
};

#endif // GRAPHICALOBJECT_H
