#include "widget.h"

const double PI  =3.141592653589793238463;


Widget::Widget(QWidget *parent)
    : QGLWidget(parent)
{
    resize(800,800);
}

void Widget::initializeGL() {
   qglClearColor(Qt::white);
   glEnable(GL_DEPTH_TEST);
   glShadeModel(GL_FLAT);
   glEnable(GL_CULL_FACE);
   glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
}

void Widget::resizeGL(int nWidth, int nHeight) {
    glViewport(0, 0, nHeight, nHeight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

void drawCircle(GLfloat x, GLfloat y, GLfloat r) {
    glBegin(GL_LINE_LOOP);

    int parts = (int) (r * 200);

    if (parts < 8) {
        parts = 8;
    }

    for(int i = 0; i < parts; ++i) {
        float angle = 2.0 * PI * float(i) / float(parts);
        float dx = r * cosf(angle);
        float dy = r * sinf(angle);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}

void drawFractal(GLfloat x, GLfloat y, GLfloat r) {
    if (r <= 0.01) {
        return;
    }

    float r2 = r / 3.0;

    for(int i = 0; i < 6; ++i) {
        float angle = 2.0 * PI * float(i) / float(6);
        float dx = (r2 * 2) * cosf(angle);
        float dy = (r2 * 2) * sinf(angle);
        drawFractal(x + dx, y + dy, r2);
    }
    drawFractal(x, y, r2);

    drawCircle(x, y, r);
}

void Widget::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    QColor halfGreen(0, 128, 0, 255);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    qglColor(halfGreen);


    drawFractal(0, 0, 1);


}
