#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <videothread.h>

namespace Ui {
class MainWindow;
}
Q_DECLARE_METATYPE(std::vector<cv::Point2f>)


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    videothread *camImg;
public slots:
    void onNewCamImg(QImage qimg);
    void onEmitGesture(std::vector<cv::Point2f> g);
    void onEmitMultiGesture(std::vector<std::vector<cv::Point2f>> mg);

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_horizontalSlider_5_valueChanged(int value);

    void on_horizontalSlider_6_valueChanged(int value);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    int hmin, smin, vmin, hmax, smax, vmax;
    cv::Scalar hsvmin, hsvmax;

    bool savePattern;
    std::vector<cv::Point2f> pattern;
    std::vector<cv::Point2f> gesture;
    //Czarek -> wektor gestow
    std::vector<std::vector<cv::Point2f>> pattern_table;
    //Czarek -> góra:0, dół:1, prawo:2, lewo:3, U:4
    std::list<QString> name_gesture{"LEFT", "RIGHT","DOWN","UP", "U"};



signals:
    void setScalarMin(cv::Scalar h1);
    void setScalarMax(cv::Scalar h1);
};

#endif // MAINWINDOW_H
