#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent): QGLWidget(parent) { }

void GLWidget::initializeGL() {
    glClearColor(0.2, 0.2, 0.2, 0.01);
}

void drawPicture(QString type) {
    if (type == "GL_POINTS") {
        glPointSize(4);
                glPointSize(4);
        glBegin(GL_POINTS);
        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0);
        glEnd();
        return;
    }
    if (type == "GL_LINES") {
        glLineWidth(4);
        glBegin(GL_LINES);
        glColor4f(0, 1, 0, 0.5);
        glVertex3f(100, 150, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(150, 100, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(110, 50, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(180, 110, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(280, 90, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(250, 100, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(90, 70, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(50, 40, 0);/*
        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0); */
        glEnd();
        return;
    }
    if (type == "GL_LINE_STRIP") {
        glLineWidth(4);
        glBegin(GL_LINE_STRIP);
        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0);
        glEnd();
        return;
    }
    if (type == "GL_LINE_LOOP") {
        glLineWidth(4);
        glBegin(GL_LINE_LOOP);
        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0);
        glEnd();
        return;
    }
    if (type == "GL_TRIANGLES") {
        glBegin(GL_TRIANGLES);
        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0);
        glEnd();
        return;
    }
    if (type == "GL_TRIANGLE_STRIP") {
        glBegin(GL_TRIANGLE_STRIP);
        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0);
        glEnd();
        return;
    }
    if (type == "GL_TRIANGLE_FAN") {
        glBegin(GL_TRIANGLE_FAN);
        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0);
        glEnd();
        return;
    }
    if(type == "GL_QUADS")
    {
        glBegin(GL_QUADS);

        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0);

        glEnd();
        return;
    }
    if (type == "GL_QUAD_STRIP") {
        glBegin(GL_QUAD_STRIP);

        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0);
        glEnd();
        return;
    }
    if (type == "GL_POLYGON") {
        glBegin(GL_POLYGON);

        glColor4f(0, 1, 0, 0.5);
        glVertex3f(77, 109, 0);
        glColor4f(1, 0, 0, 0.6);
        glVertex3f(50, 50, 0);

        glColor4f(0, 1, 0, 0.7);
        glVertex3f(259, 120, 0);
        glColor4f(0, 0, 1, 0.8);
        glVertex3f(169, 111, 0);

        glColor4f(0, 0, 1, 0.8);
        glVertex3f(240, 83, 0);
        glColor4f(1, 0, 0, 0.7);
        glVertex3f(259, 34, 0);

        glColor4f(1, 0, 0, 0.6);
        glVertex3f(211, 71, 0);
        glColor4f(1, 1, 0, 0.5);
        glVertex3f(155, 45, 0);
        glEnd();
        return;
    }
}

void GLWidget::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT);

    glEnable(GL_SCISSOR_TEST);
    glEnable(GL_ALPHA_TEST);
    glEnable(GL_BLEND);


    glBlendFunc(this->SFactor, this->DFactor);

    glAlphaFunc(GL_NEVER+this->Func, this->Ref/100.0f);
    glScissor(this->X*this->winSizeW/100, this->Y*this->winSizeH/100, this->winSizeW*this->Width/100, this->winSizeH*this->Height/100) ;

    drawPicture(this->ComboBox_type);
    glDisable(GL_BLEND);
    glDisable(GL_ALPHA_TEST);
    glDisable(GL_SCISSOR_TEST);
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

void GLWidget::changeShapePicture(QString type) {
    this->ComboBox_type = type;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
    //this->paintGL();
}


void GLWidget::changeX(int x) {
    this->X=x;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeY(int y) {
    this->Y=y;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeWidth(int width) {
    this->Width=width;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeHeight(int height) {
    this->Height=height;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeFunc(int f) {
    this->Func = f;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeRef(int r) {
    this->Ref = r;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

int getBlend(QString m) {
    if(m == "GL_ZERO") return GL_ZERO;
    if(m == "GL_ONE") return GL_ONE;
    if(m == "GL_DST_COLOR") return GL_DST_COLOR;
    if(m == "GL_ONE_MINUS_DST_COLOR") return GL_ONE_MINUS_DST_COLOR;
    if(m == "GL_SRC_ALPHA") return GL_SRC_ALPHA;
    if(m == "GL_ONE_MINUS_SRC_ALPHA") return GL_ONE_MINUS_SRC_ALPHA;
    if(m == "GL_DST_ALPHA") return GL_DST_ALPHA;
    if(m == "GL_ONE_MINUS_DST_ALPHA") return GL_ONE_MINUS_DST_ALPHA;
    if(m == "GL_SRC_ALPHA_SATURATE") return GL_SRC_ALPHA_SATURATE;
    if(m == "GL_SRC_COLOR") return GL_SRC_COLOR;
    if(m == "GL_ONE_MINUS_SRC_COLOR") return GL_ONE_MINUS_SRC_COLOR;
    return 0;
}

void GLWidget::changeSfactor(QString s) {//+GL_ZERO;
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}

void GLWidget::changeDfactor(QString d) {
    this->DFactor=getBlend(d);
    glClear(GL_COLOR_BUFFER_BIT);
    this->updateGL();
}


