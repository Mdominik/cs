/********************************************************************************
** Form generated from reading UI file 'inside.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSIDE_H
#define UI_INSIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Inside
{
public:
    QLabel *header_label;
    QGroupBox *groupBox;
    QPushButton *login_btn;
    QLabel *psw_label;
    QLabel *id_label;
    QLineEdit *psw_input;
    QLineEdit *id_input;
    QLabel *header_label_2;

    void setupUi(QDialog *Inside)
    {
        if (Inside->objectName().isEmpty())
            Inside->setObjectName(QStringLiteral("Inside"));
        Inside->resize(975, 683);
        header_label = new QLabel(Inside);
        header_label->setObjectName(QStringLiteral("header_label"));
        header_label->setGeometry(QRect(130, 120, 552, 40));
        QFont font;
        font.setPointSize(16);
        header_label->setFont(font);
        header_label->setStyleSheet(QStringLiteral(""));
        groupBox = new QGroupBox(Inside);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(220, 230, 461, 291));
        login_btn = new QPushButton(groupBox);
        login_btn->setObjectName(QStringLiteral("login_btn"));
        login_btn->setEnabled(true);
        login_btn->setGeometry(QRect(130, 190, 221, 51));
        psw_label = new QLabel(groupBox);
        psw_label->setObjectName(QStringLiteral("psw_label"));
        psw_label->setGeometry(QRect(130, 100, 141, 61));
        id_label = new QLabel(groupBox);
        id_label->setObjectName(QStringLiteral("id_label"));
        id_label->setGeometry(QRect(130, 40, 91, 61));
        psw_input = new QLineEdit(groupBox);
        psw_input->setObjectName(QStringLiteral("psw_input"));
        psw_input->setGeometry(QRect(130, 140, 221, 25));
        psw_input->setEchoMode(QLineEdit::Password);
        id_input = new QLineEdit(groupBox);
        id_input->setObjectName(QStringLiteral("id_input"));
        id_input->setGeometry(QRect(130, 80, 221, 25));
        id_input->setStyleSheet(QLatin1String("#id_input {\n"
"	border-color: blue;\n"
"}"));
        header_label_2 = new QLabel(Inside);
        header_label_2->setObjectName(QStringLiteral("header_label_2"));
        header_label_2->setGeometry(QRect(330, 210, 552, 40));
        header_label_2->setFont(font);
        header_label_2->setStyleSheet(QStringLiteral(""));

        retranslateUi(Inside);

        QMetaObject::connectSlotsByName(Inside);
    } // setupUi

    void retranslateUi(QDialog *Inside)
    {
        Inside->setWindowTitle(QApplication::translate("Inside", "Dialog", Q_NULLPTR));
        header_label->setText(QApplication::translate("Inside", "Welcome to the Bulk Club Managment System", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Inside", "Please log in", Q_NULLPTR));
        login_btn->setText(QApplication::translate("Inside", "Log in", Q_NULLPTR));
        psw_label->setText(QApplication::translate("Inside", "Give your password ", Q_NULLPTR));
        id_label->setText(QApplication::translate("Inside", "Give your ID               ", Q_NULLPTR));
        header_label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Inside: public Ui_Inside {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSIDE_H
