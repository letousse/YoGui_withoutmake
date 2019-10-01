/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->setEnabled(true);
        Dialog->resize(369, 352);
        Dialog->setContextMenuPolicy(Qt::NoContextMenu);
        Dialog->setWindowTitle(QStringLiteral("OS"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/yocto-project-176x176.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 230, 291, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(gridLayoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 5, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 50, 181, 176));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/yocto-project-176x176.png")));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 290, 291, 51));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 330, 31, 17));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        label->setText(QApplication::translate("Dialog", "Downloading Layers....", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("Dialog", "V1.0", Q_NULLPTR));
        Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
