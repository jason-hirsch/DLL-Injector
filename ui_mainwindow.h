/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *dllList;
    QPushButton *addDll;
    QPushButton *deleteDll;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *loadingLabel;
    QComboBox *loadingType;
    QVBoxLayout *verticalLayout_2;
    QLabel *methodLabel;
    QComboBox *methodType;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit;
    QRadioButton *radioButton;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_2;
    QPushButton *selectProcess;
    QPushButton *inject;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imageLabel;
    QLabel *selectLabel;
    QGroupBox *groupBox_5;
    QTextEdit *injectLog;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(821, 540);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(750, 540));
        MainWindow->setMaximumSize(QSize(850, 540));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        dllList = new QTableWidget(centralWidget);
        if (dllList->columnCount() < 3)
            dllList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        dllList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        dllList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        dllList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        dllList->setObjectName(QString::fromUtf8("dllList"));
        dllList->setGeometry(QRect(20, 10, 420, 470));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        dllList->setFont(font1);
        dllList->setStyleSheet(QString::fromUtf8("QHeaderView::down-arrow { subcontrol-origin:content; subcontrol-position: center left; width: 12px; height: 15px; }\n"
" QHeaderView::up-arrow { subcontrol-origin:content; subcontrol-position: center left; width: 12px; height: 15px; }\n"
""));
        dllList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        dllList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dllList->setTabKeyNavigation(false);
        dllList->setProperty("showDropIndicator", QVariant(false));
        dllList->setDragDropOverwriteMode(false);
        dllList->setSelectionMode(QAbstractItemView::NoSelection);
        dllList->setSortingEnabled(true);
        dllList->horizontalHeader()->setHighlightSections(false);
        dllList->verticalHeader()->setVisible(false);
        dllList->verticalHeader()->setHighlightSections(false);
        addDll = new QPushButton(centralWidget);
        addDll->setObjectName(QString::fromUtf8("addDll"));
        addDll->setGeometry(QRect(70, 490, 130, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(12);
        addDll->setFont(font2);
        deleteDll = new QPushButton(centralWidget);
        deleteDll->setObjectName(QString::fromUtf8("deleteDll"));
        deleteDll->setGeometry(QRect(260, 490, 130, 40));
        deleteDll->setFont(font2);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(460, 10, 341, 191));
        QFont font3;
        font3.setPointSize(10);
        font3.setStyleStrategy(QFont::PreferAntialias);
        groupBox->setFont(font3);
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 143, 99));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loadingLabel = new QLabel(layoutWidget);
        loadingLabel->setObjectName(QString::fromUtf8("loadingLabel"));
        sizePolicy.setHeightForWidth(loadingLabel->sizePolicy().hasHeightForWidth());
        loadingLabel->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(8);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        loadingLabel->setFont(font4);

        verticalLayout->addWidget(loadingLabel);

        loadingType = new QComboBox(layoutWidget);
        loadingType->addItem(QString());
        loadingType->addItem(QString());
        loadingType->setObjectName(QString::fromUtf8("loadingType"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loadingType->sizePolicy().hasHeightForWidth());
        loadingType->setSizePolicy(sizePolicy1);
        loadingType->setFont(font);
        loadingType->setStyleSheet(QString::fromUtf8("outline: 0px"));

        verticalLayout->addWidget(loadingType);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        methodLabel = new QLabel(layoutWidget);
        methodLabel->setObjectName(QString::fromUtf8("methodLabel"));
        sizePolicy.setHeightForWidth(methodLabel->sizePolicy().hasHeightForWidth());
        methodLabel->setSizePolicy(sizePolicy);
        methodLabel->setFont(font1);

        verticalLayout_2->addWidget(methodLabel);

        methodType = new QComboBox(layoutWidget);
        methodType->addItem(QString());
        methodType->addItem(QString());
        methodType->setObjectName(QString::fromUtf8("methodType"));
        sizePolicy1.setHeightForWidth(methodType->sizePolicy().hasHeightForWidth());
        methodType->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Verdana"));
        font5.setPointSize(10);
        font5.setItalic(false);
        methodType->setFont(font5);
        methodType->setStyleSheet(QString::fromUtf8("outline: 0px"));

        verticalLayout_2->addWidget(methodType);


        verticalLayout_3->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 130, 141, 50));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font6;
        font6.setPointSize(8);
        lineEdit->setFont(font6);

        verticalLayout_4->addWidget(lineEdit);

        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font6);

        verticalLayout_4->addWidget(radioButton);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(160, 20, 171, 91));
        groupBox_2->setFont(font6);
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_2->setFlat(false);
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 158, 61));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_2 = new QCheckBox(layoutWidget2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font6);

        gridLayout->addWidget(checkBox_2, 0, 0, 1, 1);

        checkBox_3 = new QCheckBox(layoutWidget2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setFont(font6);

        gridLayout->addWidget(checkBox_3, 0, 1, 1, 1);

        checkBox_4 = new QCheckBox(layoutWidget2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setFont(font6);

        gridLayout->addWidget(checkBox_4, 1, 0, 1, 2);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(160, 120, 171, 61));
        layoutWidget3 = new QWidget(groupBox_4);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 151, 31));
        gridLayout_3 = new QGridLayout(layoutWidget3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font6);

        gridLayout_3->addWidget(checkBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(460, 220, 341, 101));
        layoutWidget4 = new QWidget(groupBox_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 321, 71));
        gridLayout_2 = new QGridLayout(layoutWidget4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        selectProcess = new QPushButton(layoutWidget4);
        selectProcess->setObjectName(QString::fromUtf8("selectProcess"));
        sizePolicy.setHeightForWidth(selectProcess->sizePolicy().hasHeightForWidth());
        selectProcess->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Verdana"));
        font7.setPointSize(11);
        selectProcess->setFont(font7);
        selectProcess->setAutoDefault(false);
        selectProcess->setFlat(false);

        gridLayout_2->addWidget(selectProcess, 1, 0, 1, 1);

        inject = new QPushButton(layoutWidget4);
        inject->setObjectName(QString::fromUtf8("inject"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(inject->sizePolicy().hasHeightForWidth());
        inject->setSizePolicy(sizePolicy2);
        QFont font8;
        font8.setFamily(QString::fromUtf8("Verdana"));
        font8.setPointSize(11);
        font8.setStyleStrategy(QFont::PreferAntialias);
        inject->setFont(font8);

        gridLayout_2->addWidget(inject, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        imageLabel = new QLabel(layoutWidget4);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy3);
        imageLabel->setStyleSheet(QString::fromUtf8("border: 1px solid black; \n"
"border-right: 0px;"));

        horizontalLayout_2->addWidget(imageLabel);

        selectLabel = new QLabel(layoutWidget4);
        selectLabel->setObjectName(QString::fromUtf8("selectLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(selectLabel->sizePolicy().hasHeightForWidth());
        selectLabel->setSizePolicy(sizePolicy4);
        selectLabel->setStyleSheet(QString::fromUtf8("border: 1px solid black; border-left: 0px;"));
        selectLabel->setScaledContents(false);

        horizontalLayout_2->addWidget(selectLabel);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(460, 330, 331, 151));
        injectLog = new QTextEdit(groupBox_5);
        injectLog->setObjectName(QString::fromUtf8("injectLog"));
        injectLog->setGeometry(QRect(10, 20, 311, 121));
        injectLog->setFocusPolicy(Qt::NoFocus);
        injectLog->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        injectLog->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        injectLog->setTextInteractionFlags(Qt::NoTextInteraction);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        selectProcess->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DLL Injector", nullptr));
        QTableWidgetItem *___qtablewidgetitem = dllList->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = dllList->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Arch", nullptr));
        addDll->setText(QApplication::translate("MainWindow", "Add DLL", nullptr));
        deleteDll->setText(QApplication::translate("MainWindow", "Delete DLL", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        loadingLabel->setText(QApplication::translate("MainWindow", "Load Method", nullptr));
        loadingType->setItemText(0, QApplication::translate("MainWindow", "LoadLibrary", nullptr));
        loadingType->setItemText(1, QApplication::translate("MainWindow", "ManualMap", nullptr));

        methodLabel->setText(QApplication::translate("MainWindow", "Injection Method", nullptr));
        methodType->setItemText(0, QApplication::translate("MainWindow", "RemoteThread", nullptr));
        methodType->setItemText(1, QApplication::translate("MainWindow", "WindowsHookEx", nullptr));

        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Delay(ms)", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "Delay", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Stealth", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "Unlink PEB", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "Load Copy", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "Randomize name", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Extra", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Close on Injection", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Target Process", nullptr));
        selectProcess->setText(QApplication::translate("MainWindow", "Select Process", nullptr));
        inject->setText(QApplication::translate("MainWindow", "Inject", nullptr));
        imageLabel->setText(QString());
        selectLabel->setText(QApplication::translate("MainWindow", "No Process Selected", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Injection Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
