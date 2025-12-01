#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ui_mainwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow,
                   public Ui_MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void toggleDarkMode(bool checked);

private:
    Ui::MainWindow *ui;
    bool m_darkMode;
    
    void applyLightStyle();
    void applyDarkStyle();
};
#endif // MAINWINDOW_H
