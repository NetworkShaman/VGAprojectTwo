#include "treebuffer.h"

treebuffer::treebuffer()
{
    init();
}

void treebuffer::init(){
    Vertex triangle[] = {
    //          x    y     z     R    G    B
     Vertex{ { 1.0, 0.0, 0.0}, {0.0, 1.0, 1.0}}, // 0
     Vertex{ { 0.0, 1.0, 0.0}, {0.0, 1.0, 0.0}}, // 1
     Vertex{ { 0.0, 0.0, 1.0}, {0.0, 1.0, 1.0}}, // 2
     Vertex{ { 0.0, 0.0,-1.0}, {0.0, 1.0, 1.0}}, // 3
     Vertex{ {-1.0, 0.0, 0.0}, {0.0, 1.0, 1.0}}, // 4
    };

    GLubyte indices[] = {
        0, 4, 1, 1, 3, 2
    };

    m_buffer.create();
    m_buffer.setUsagePattern( QOpenGLBuffer::StreamDraw );
    m_buffer.bind();
    m_buffer.allocate( triangle, sizeof(triangle) );

    m_indicesBuffer.create();
    m_indicesBuffer.setUsagePattern( QOpenGLBuffer::StreamDraw );
    m_indicesBuffer.bind();
    m_indicesBuffer.allocate( indices, sizeof(indices) );
}
