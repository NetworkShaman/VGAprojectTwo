#include "graphicalobject.h"

GraphicalObject::GraphicalObject(ShaderProgram* program, VertexBuffer* buffer, ObjectProperty property)
{
    m_program = program;
    m_buffer = buffer;
    m_property = property;
}
