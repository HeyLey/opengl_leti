#include "glwidget.h"
#include <vector>
#include <cmath>
#include <iostream>

#define SIZE 6 //num of points
using namespace std;


int degree = 3;


GLWidget::GLWidget(QWidget *parent):
    QGLWidget(parent){


        this->knots.resize(degree + 6 + 1);

        double d = 1.0 / (this->knots.size() -  2 * degree - 1);

        size_t i;
        for (i = degree; i < this->knots.size() - degree; i++) {
            this->knots[i] = (i - degree) * d;
        }

        for (; i < this->knots.size(); i++) {
            this->knots[i] = 1;
        }
}

double GLWidget::basisFunc(int i, int k, double t) {
        if (k == 0) {
            if (knots[i] <= t && t < knots[i + 1]) {
                return 1;
            }
            return 0;
        }
        double a = (knots[i + k] - knots[i]) == 0 ? 0 : (t - knots[i]) / (knots[i + k] - knots[i]);
        double b = (knots[i + k + 1] - knots[i + 1]) == 0 ? 0 : (knots[i + k + 1] - t) / (knots[i + k + 1] - knots[i + 1]);

        return a * basisFunc(i, k - 1, t) + b * basisFunc(i + 1, k - 1, t);
    }

void GLWidget::initializeGL() {
    glClearColor(0.2, 0.2, 0.2, 0.01);
}

point GLWidget::GetPoint(double t) {
    point p = {0.0, 0.0};
    for (int i = 0; i < 6; i++) {
        double scale = basisFunc(i, degree, t);
        p.x += points[i].x * scale;
        p.y += points[i].y * scale;
    }
    return p;
}


void GLWidget::DrawCurve() {
    glColor3f(1,1,0);
    glPointSize(4);
    glBegin(GL_POINTS);

    for (size_t i = 0; i < 6; i += 1) {
        glVertex2f(points[i].x, points[i].y);
    }

    glEnd();

    glPointSize(1);
    glColor3f(1,1,1);
    glBegin(GL_LINE_STRIP);
    for (double t = 0; t <= 1; t += 0.001) {
        point p = GetPoint(t);
        glVertex2f(p.x, p.y);

    }
    glEnd();
}

void GLWidget::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT);

    DrawCurve();
}

void GLWidget::resizeGL(int w, int h) {
    this->winSizeW = w;
    this->winSizeH =h;
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 350.0, 0.0, 200.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void GLWidget::changeX0(int x) {
    points[0].x=x;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeY0(int y) {
    points[0].y=y;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeX1(int x) {
    points[1].x=x;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeY1(int y) {
    points[1].y=y;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeX2(int x) {
    points[2].x=x;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeY2(int y) {
    points[2].y=y;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeX3(int x) {
    points[3].x=x;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeY3(int y) {
    points[3].y=y;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeX4(int x) {
    points[4].x=x;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeY4(int y) {
    points[4].y=y;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}


void GLWidget::changeX5(int x) {
    points[5].x=x;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeY5(int y) {
    points[5].y=y;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}


