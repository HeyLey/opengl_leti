#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>

struct point {
    double x;
    double y;
};

class GLWidget : public QGLWidget {
    Q_OBJECT
private:
    QString ComboBox_type="GL_POINTS";
    //
    int winSizeW, winSizeH;

    point points[6] = {
        {250., 150.},
        {47., 110},
        {123,  48.},
        {250, 50},
        {280, 90},
        {190, 140}
    };

    std::vector<double> knots;

public:
    explicit GLWidget(QWidget *parent=0);
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    double basisFunc(int i, int k, double t);
    point GetPoint(double t);
    void DrawCurve();

private slots:

    void changeX0(int x);
    void changeY0(int y);

    void changeX1(int x);
    void changeY1(int y);

    void changeX2(int x);
    void changeY2(int y);

    void changeX3(int x);
    void changeY3(int y);

    void changeX4(int x);
    void changeY4(int y);

    void changeX5(int x);
    void changeY5(int y);


};

#endif // GLWIDGET_H
