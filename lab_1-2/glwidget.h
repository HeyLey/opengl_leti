#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>

class GLWidget : public QGLWidget {
    Q_OBJECT

private:

    QString ComboBox_type ="GL_POINTS";
    int X = 0;
    int Y = 0;
    int Width = 99, Height = 99;
    int winSizeW = 0;
    int winSizeH = 0;
    int Func = GL_ALWAYS;
    int Ref = 1.0;
    int SFactor = GL_SRC_ALPHA;
    int DFactor = GL_ONE_MINUS_SRC_ALPHA;

public:

    explicit GLWidget(QWidget *parent = 0);
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

private slots:

    void changeShapePicture(QString type);
    void changeX(int x);
    void changeY(int y);
    void changeWidth(int width);
    void changeHeight(int height);
    void changeFunc(int f);
    void changeRef(int r);
    void changeSfactor(QString s);
    void changeDfactor(QString d);

};

#endif // GLWIDGET_H
