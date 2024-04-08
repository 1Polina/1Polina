#ifndef WIDGETMY_H
#define WIDGETMY_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widgetmy; }
QT_END_NAMESPACE

class Widgetmy : public QWidget
{
    Q_OBJECT

public:
    Widgetmy(QWidget *parent = nullptr);
    ~Widgetmy();

private slots:
    void on_Summa_toggled(bool checked);

    void on_Knopka_clicked();

    void on_Raznost_toggled(bool checked);

    void on_Umnozhenie_toggled(bool checked);

    void on_Delenie_toggled(bool checked);

    void on_InputOne_cursorPositionChanged(int arg1, int arg2);

    void on_Delenie_clicked();

    void on_sqrt_clicked();

private:
    Ui::Widgetmy *ui;
};
#endif // WIDGETMY_H
