#ifndef SETTINGSWIDGET_H
#define SETTINGSWIDGET_H

#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QFileDialog>
#include <QGroupBox>
#include <QPushButton>
#include <QString>
#include "settings.h"

class SettingsWidget : public QDialog
{
    Q_OBJECT
public:
    explicit SettingsWidget(QWidget *parent = 0);

    QLineEdit * leSaveMusicPath = NULL; // path to save music
    QPushButton * btnBrowserPath = NULL;

    QCheckBox* chbReplaceMusic = NULL;

    QPushButton * btnSave = NULL;
    QPushButton * btnCancel = NULL;


    void CreateSaveMusicBox();
    void CreateReplaceMusicBox();

    void SetCurrentSettings();

private:

signals:

public slots:
    void SetSaveMusicPath();
    void BtnSave();

};

#endif // SETTINGSWIDGET_H
