#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>

namespace Ui {
class FirstWindow;
}

class FirstWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstWindow(QWidget *parent = 0);
    ~FirstWindow();


private slots:
    void on_action_4_triggered();

    void on_Sport_triggered();

    void on_Club_triggered();

    void on_Competition_triggered();

    void on_Organizer_triggered();

    void on_Sportobject_triggered();

    void on_Trainer_triggered();

    void on_Sportsman_triggered();

    void on_Competition_has_sportsman_triggered();

    void on_Sportsman_has_trainer_triggered();

    void on_Zapros_2_triggered();

    void on_Zapros_3_triggered();

    void on_Zapros_1_2_part_triggered();

    void on_Zapros_1_1part_triggered();

    void on_zapros_6_triggered();

    void on_zapros_5_triggered();

    void on_zapros_7_triggered();

    void on_zapros_8_triggered();

    void on_zapros_9_triggered();

    void on_zapros_10_triggered();

    void on_zapros_11_triggered();

    void on_zapros_13_triggered();

    void on_exit_triggered();

    void on_zapros_14_triggered();

    void on_zapros_15_triggered();

private:
    Ui::FirstWindow *ui;
};

#endif // FIRSTWINDOW_H


