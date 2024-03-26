#ifndef OBJECTPROPERTY_H
#define OBJECTPROPERTY_H
#include <QOpenGLFunctions>

struct Position
{
    GLfloat x;
    GLfloat y;
    GLfloat z;
};

struct Rotation
{
    GLfloat x;
    GLfloat y;
    GLfloat z;
};

struct Scale
{
    GLfloat x;
    GLfloat y;
    GLfloat z;
};

struct ObjectProperty
{
    Position position;
    Rotation rotation;
    Scale scale;
};


#endif // OBJECTPROPERTY_H
