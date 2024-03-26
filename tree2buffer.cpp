#include "tree2buffer.h"

tree2buffer::tree2buffer()
{
    init();
}

void tree2buffer::init(){
    Vertex triangle[] = {
    //          x    y     z     R    G    B
     Vertex{ { 1.0, 0.0, 0.0}, {0.0, 1.0, 1.0}}, // 0
     Vertex{ { 0.0, 1.0, 0.0}, {0.0, 1.0, 0.0}}, // 1
     Vertex{ { 0.0, 0.0, 1.0}, {0.0, 1.0, 1.0}}, // 2
     Vertex{ { 0.0, 0.0,-1.0}, {0.0, 1.0, 1.0}}, // 3
     Vertex{ {-1.0, 0.0, 0.0}, {0.0, 1.0, 1.0}}, // 4

    Vertex{ { 1.0, 0.5, 0.0}, {0.0, 1.0, 0.0}}, // 5
    Vertex{ { 0.0, 1.5, 0.0}, {0.0, 1.0, 1.0}}, // 6
    Vertex{ { 0.0, 0.5, 1.0}, {0.0, 1.0, 0.0}}, // 7
    Vertex{ { 0.0, 0.5,-1.0}, {0.0, 1.0, 0.0}}, // 8
    Vertex{ {-1.0, 0.5, 0.0}, {0.0, 1.0, 0.0}}, // 9
    };

    GLubyte indices[] = {
        0, 4, 1, 1, 3, 2,
        5, 9, 6, 6, 8, 7
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
