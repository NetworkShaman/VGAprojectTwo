#include "treeobject.h"

treeobject::treeobject(ShaderProgram* program, VertexBuffer* buffer, ObjectProperty property)
    :GraphicalObject(program, buffer, property)
{

}


void treeobject::render(QMatrix4x4 transformationMatrix){
    QOpenGLShaderProgram* program = m_program->getProgram();
    GLuint colAttr = m_program->getColAttr();
    GLuint posAttr = m_program->getPosAttr();
    GLuint matrix = m_program->getMatrix();

    program->bind();
    program->enableAttributeArray(posAttr);
    program->enableAttributeArray(colAttr);

    program->setUniformValue(matrix, transformationMatrix);

    m_buffer->bind(); // do not forget!

    program->setAttributeBuffer(posAttr, GL_FLOAT, 0, 3, sizeof(Vertex));
    program->setAttributeBuffer(colAttr, GL_FLOAT, sizeof(Vertex::position), 3, sizeof(Vertex));

    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_BYTE, (void*)(0*sizeof(GLubyte)) );

    program->disableAttributeArray(posAttr);
    program->disableAttributeArray(colAttr);
    program->release();
}
