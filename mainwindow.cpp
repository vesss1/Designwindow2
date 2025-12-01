#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_darkMode(false)
{
    ui->setupUi(this);
    
    // Connect dark mode action
    connect(ui->actionDarkMode, &QAction::toggled, this, &MainWindow::toggleDarkMode);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::toggleDarkMode(bool checked)
{
    m_darkMode = checked;
    if (checked) {
        applyDarkStyle();
    } else {
        applyLightStyle();
    }
}

void MainWindow::applyLightStyle()
{
    setStyleSheet(R"(
        QMainWindow {
            background-color: #f5f5f5;
        }
        QMenuBar {
            background-color: #ffffff;
            border-bottom: 1px solid #e0e0e0;
            padding: 2px;
        }
        QMenuBar::item {
            padding: 6px 12px;
            border-radius: 4px;
        }
        QMenuBar::item:selected {
            background-color: #e3f2fd;
        }
        QMenu {
            background-color: #ffffff;
            border: 1px solid #e0e0e0;
            border-radius: 4px;
            padding: 4px;
        }
        QMenu::item {
            padding: 8px 24px;
            border-radius: 4px;
        }
        QMenu::item:selected {
            background-color: #e3f2fd;
        }
        QToolBar {
            background-color: #ffffff;
            border: none;
            border-bottom: 1px solid #e0e0e0;
            padding: 4px;
            spacing: 6px;
        }
        QToolButton {
            padding: 6px 10px;
            border-radius: 4px;
            border: none;
        }
        QToolButton:hover {
            background-color: #e3f2fd;
        }
        QToolButton:pressed {
            background-color: #bbdefb;
        }
        QStatusBar {
            background-color: #ffffff;
            border-top: 1px solid #e0e0e0;
        }
    )");
}

void MainWindow::applyDarkStyle()
{
    setStyleSheet(R"(
        QMainWindow {
            background-color: #1e1e1e;
        }
        QMenuBar {
            background-color: #2d2d2d;
            color: #ffffff;
            border-bottom: 1px solid #3d3d3d;
            padding: 2px;
        }
        QMenuBar::item {
            padding: 6px 12px;
            border-radius: 4px;
            color: #ffffff;
        }
        QMenuBar::item:selected {
            background-color: #3d3d3d;
        }
        QMenu {
            background-color: #2d2d2d;
            color: #ffffff;
            border: 1px solid #3d3d3d;
            border-radius: 4px;
            padding: 4px;
        }
        QMenu::item {
            padding: 8px 24px;
            border-radius: 4px;
            color: #ffffff;
        }
        QMenu::item:selected {
            background-color: #3d3d3d;
        }
        QToolBar {
            background-color: #2d2d2d;
            border: none;
            border-bottom: 1px solid #3d3d3d;
            padding: 4px;
            spacing: 6px;
        }
        QToolButton {
            padding: 6px 10px;
            border-radius: 4px;
            border: none;
            color: #ffffff;
        }
        QToolButton:hover {
            background-color: #3d3d3d;
        }
        QToolButton:pressed {
            background-color: #4d4d4d;
        }
        QStatusBar {
            background-color: #2d2d2d;
            color: #ffffff;
            border-top: 1px solid #3d3d3d;
        }
    )");
}
