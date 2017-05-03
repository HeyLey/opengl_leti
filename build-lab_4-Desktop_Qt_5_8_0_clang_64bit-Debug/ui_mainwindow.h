/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <glwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    GLWidget *MyGLWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSlider *ScissorX;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QSlider *ScissorY;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QSlider *ScissorX_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QSlider *ScissorX_6;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_43;
    QVBoxLayout *verticalLayout_44;
    QLabel *label_27;
    QSlider *ScissorX_3;
    QVBoxLayout *verticalLayout_45;
    QLabel *label_28;
    QSlider *ScissorY_3;
    QVBoxLayout *verticalLayout_46;
    QVBoxLayout *verticalLayout_47;
    QLabel *label_29;
    QSlider *ScissorX_7;
    QVBoxLayout *verticalLayout_48;
    QLabel *label_30;
    QSlider *ScissorX_8;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_49;
    QVBoxLayout *verticalLayout_50;
    QLabel *label_31;
    QSlider *ScissorX_4;
    QVBoxLayout *verticalLayout_51;
    QLabel *label_32;
    QSlider *ScissorY_4;
    QVBoxLayout *verticalLayout_52;
    QVBoxLayout *verticalLayout_53;
    QLabel *label_33;
    QSlider *ScissorX_9;
    QVBoxLayout *verticalLayout_54;
    QLabel *label_34;
    QSlider *ScissorX_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(839, 612);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_16 = new QVBoxLayout(centralWidget);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        MyGLWidget = new GLWidget(centralWidget);
        MyGLWidget->setObjectName(QStringLiteral("MyGLWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MyGLWidget->sizePolicy().hasHeightForWidth());
        MyGLWidget->setSizePolicy(sizePolicy);
        MyGLWidget->setAutoFillBackground(false);

        horizontalLayout_7->addWidget(MyGLWidget);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_14->addLayout(horizontalLayout_8);


        verticalLayout_16->addLayout(verticalLayout_14);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        ScissorX = new QSlider(centralWidget);
        ScissorX->setObjectName(QStringLiteral("ScissorX"));
        ScissorX->setMinimumSize(QSize(92, 22));
        ScissorX->setMaximum(100);
        ScissorX->setSingleStep(1);
        ScissorX->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(ScissorX);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        ScissorY = new QSlider(centralWidget);
        ScissorY->setObjectName(QStringLiteral("ScissorY"));
        ScissorY->setMaximum(100);
        ScissorY->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(ScissorY);


        verticalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        ScissorX_5 = new QSlider(centralWidget);
        ScissorX_5->setObjectName(QStringLiteral("ScissorX_5"));
        ScissorX_5->setMinimumSize(QSize(92, 22));
        ScissorX_5->setMaximum(100);
        ScissorX_5->setSingleStep(1);
        ScissorX_5->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(ScissorX_5);


        verticalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_7->addWidget(label_7);

        ScissorX_6 = new QSlider(centralWidget);
        ScissorX_6->setObjectName(QStringLiteral("ScissorX_6"));
        ScissorX_6->setMinimumSize(QSize(92, 22));
        ScissorX_6->setMaximum(100);
        ScissorX_6->setSingleStep(1);
        ScissorX_6->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(ScissorX_6);


        verticalLayout_5->addLayout(verticalLayout_7);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_15->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_15);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_43 = new QVBoxLayout();
        verticalLayout_43->setSpacing(6);
        verticalLayout_43->setObjectName(QStringLiteral("verticalLayout_43"));
        verticalLayout_44 = new QVBoxLayout();
        verticalLayout_44->setSpacing(6);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_44->addWidget(label_27);

        ScissorX_3 = new QSlider(centralWidget);
        ScissorX_3->setObjectName(QStringLiteral("ScissorX_3"));
        ScissorX_3->setMinimumSize(QSize(92, 22));
        ScissorX_3->setMaximum(100);
        ScissorX_3->setSingleStep(1);
        ScissorX_3->setOrientation(Qt::Horizontal);

        verticalLayout_44->addWidget(ScissorX_3);


        verticalLayout_43->addLayout(verticalLayout_44);

        verticalLayout_45 = new QVBoxLayout();
        verticalLayout_45->setSpacing(6);
        verticalLayout_45->setObjectName(QStringLiteral("verticalLayout_45"));
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_45->addWidget(label_28);

        ScissorY_3 = new QSlider(centralWidget);
        ScissorY_3->setObjectName(QStringLiteral("ScissorY_3"));
        ScissorY_3->setMaximum(100);
        ScissorY_3->setOrientation(Qt::Horizontal);

        verticalLayout_45->addWidget(ScissorY_3);


        verticalLayout_43->addLayout(verticalLayout_45);


        horizontalLayout_5->addLayout(verticalLayout_43);

        verticalLayout_46 = new QVBoxLayout();
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        verticalLayout_47 = new QVBoxLayout();
        verticalLayout_47->setSpacing(6);
        verticalLayout_47->setObjectName(QStringLiteral("verticalLayout_47"));
        label_29 = new QLabel(centralWidget);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_47->addWidget(label_29);

        ScissorX_7 = new QSlider(centralWidget);
        ScissorX_7->setObjectName(QStringLiteral("ScissorX_7"));
        ScissorX_7->setMinimumSize(QSize(92, 22));
        ScissorX_7->setMaximum(100);
        ScissorX_7->setSingleStep(1);
        ScissorX_7->setOrientation(Qt::Horizontal);

        verticalLayout_47->addWidget(ScissorX_7);


        verticalLayout_46->addLayout(verticalLayout_47);

        verticalLayout_48 = new QVBoxLayout();
        verticalLayout_48->setSpacing(6);
        verticalLayout_48->setObjectName(QStringLiteral("verticalLayout_48"));
        label_30 = new QLabel(centralWidget);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_48->addWidget(label_30);

        ScissorX_8 = new QSlider(centralWidget);
        ScissorX_8->setObjectName(QStringLiteral("ScissorX_8"));
        ScissorX_8->setMinimumSize(QSize(92, 22));
        ScissorX_8->setMaximum(100);
        ScissorX_8->setSingleStep(1);
        ScissorX_8->setOrientation(Qt::Horizontal);

        verticalLayout_48->addWidget(ScissorX_8);


        verticalLayout_46->addLayout(verticalLayout_48);


        horizontalLayout_5->addLayout(verticalLayout_46);


        horizontalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_49 = new QVBoxLayout();
        verticalLayout_49->setSpacing(6);
        verticalLayout_49->setObjectName(QStringLiteral("verticalLayout_49"));
        verticalLayout_50 = new QVBoxLayout();
        verticalLayout_50->setSpacing(6);
        verticalLayout_50->setObjectName(QStringLiteral("verticalLayout_50"));
        label_31 = new QLabel(centralWidget);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_50->addWidget(label_31);

        ScissorX_4 = new QSlider(centralWidget);
        ScissorX_4->setObjectName(QStringLiteral("ScissorX_4"));
        ScissorX_4->setMinimumSize(QSize(92, 22));
        ScissorX_4->setMaximum(100);
        ScissorX_4->setSingleStep(1);
        ScissorX_4->setOrientation(Qt::Horizontal);

        verticalLayout_50->addWidget(ScissorX_4);


        verticalLayout_49->addLayout(verticalLayout_50);

        verticalLayout_51 = new QVBoxLayout();
        verticalLayout_51->setSpacing(6);
        verticalLayout_51->setObjectName(QStringLiteral("verticalLayout_51"));
        label_32 = new QLabel(centralWidget);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout_51->addWidget(label_32);

        ScissorY_4 = new QSlider(centralWidget);
        ScissorY_4->setObjectName(QStringLiteral("ScissorY_4"));
        ScissorY_4->setMaximum(100);
        ScissorY_4->setOrientation(Qt::Horizontal);

        verticalLayout_51->addWidget(ScissorY_4);


        verticalLayout_49->addLayout(verticalLayout_51);


        horizontalLayout_6->addLayout(verticalLayout_49);

        verticalLayout_52 = new QVBoxLayout();
        verticalLayout_52->setSpacing(6);
        verticalLayout_52->setObjectName(QStringLiteral("verticalLayout_52"));
        verticalLayout_53 = new QVBoxLayout();
        verticalLayout_53->setSpacing(6);
        verticalLayout_53->setObjectName(QStringLiteral("verticalLayout_53"));
        label_33 = new QLabel(centralWidget);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_53->addWidget(label_33);

        ScissorX_9 = new QSlider(centralWidget);
        ScissorX_9->setObjectName(QStringLiteral("ScissorX_9"));
        ScissorX_9->setMinimumSize(QSize(92, 22));
        ScissorX_9->setMaximum(100);
        ScissorX_9->setSingleStep(1);
        ScissorX_9->setOrientation(Qt::Horizontal);

        verticalLayout_53->addWidget(ScissorX_9);


        verticalLayout_52->addLayout(verticalLayout_53);

        verticalLayout_54 = new QVBoxLayout();
        verticalLayout_54->setSpacing(6);
        verticalLayout_54->setObjectName(QStringLiteral("verticalLayout_54"));
        label_34 = new QLabel(centralWidget);
        label_34->setObjectName(QStringLiteral("label_34"));

        verticalLayout_54->addWidget(label_34);

        ScissorX_10 = new QSlider(centralWidget);
        ScissorX_10->setObjectName(QStringLiteral("ScissorX_10"));
        ScissorX_10->setMinimumSize(QSize(92, 22));
        ScissorX_10->setMaximum(100);
        ScissorX_10->setSingleStep(1);
        ScissorX_10->setOrientation(Qt::Horizontal);

        verticalLayout_54->addWidget(ScissorX_10);


        verticalLayout_52->addLayout(verticalLayout_54);


        horizontalLayout_6->addLayout(verticalLayout_52);


        horizontalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_16->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(ScissorX, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeX0(int)));
        QObject::connect(ScissorY, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeY0(int)));
        QObject::connect(ScissorX_3, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeX2(int)));
        QObject::connect(ScissorY_3, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeY2(int)));
        QObject::connect(ScissorX_4, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeX4(int)));
        QObject::connect(ScissorY_4, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeY4(int)));
        QObject::connect(ScissorX_5, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeX1(int)));
        QObject::connect(ScissorX_6, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeY1(int)));
        QObject::connect(ScissorX_7, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeX3(int)));
        QObject::connect(ScissorX_8, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeY3(int)));
        QObject::connect(ScissorX_9, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeX5(int)));
        QObject::connect(ScissorX_10, SIGNAL(valueChanged(int)), MyGLWidget, SLOT(changeY5(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\270\321\202\320\270\320\262\321\213 OpenGL", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "X1:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Y1:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "X2:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Y2:", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "X3:", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "Y3:", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "X4:", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "Y4:", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "X5:", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "Y5:", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "X6:", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "Y6:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
