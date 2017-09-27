#ifndef NORMALMATERIAL_H
#define NORMALMATERIAL_H

#include <QMainWindow>
#include <QKeyEvent>
#include "materialdata.h"

namespace Ui {
class normalmaterial;
}

class NormalMaterial : public QMainWindow
{
    Q_OBJECT

signals:
    void sendSelect();

public:
    explicit NormalMaterial(QWidget *parent = 0);
    ~NormalMaterial();

    QString subFinger(QString number);           //去字母
    void showWidget(QString number, QString id); //显示窗口
    void showWidget();                           //显示窗口
    void setData(DataParent data);               //设置数据

private slots:
    void on_pushButtonOk_clicked();       //确定按钮
    void on_pushButtonCancel_clicked();   //取消按钮

private:
    Ui::normalmaterial *ui;
    void keyPressEvent(QKeyEvent *event); //按键点击
    QString id;
};

#endif // NORMALMATERIAL_H
