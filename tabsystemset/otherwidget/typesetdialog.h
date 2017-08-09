#ifndef TYPESETDIALOG_H
#define TYPESETDIALOG_H

#include <QDialog>

namespace Ui {
class typesetdialog;
}

class TypeSetDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TypeSetDialog(QWidget *parent = 0);
    ~TypeSetDialog();

    void showUpdateDialog(QString typeAbbreviation, QString typeName);
    void showNewDialog();

private slots:
    void on_pushButtonOk_clicked();

    void on_pushButtonCancel_clicked();

signals:
    void sendString(QString, QString, int);

private:
    Ui::typesetdialog *ui;

    int dataType;
};

#endif // TYPESETDIALOG_H
