/********************************************************************************
** Form generated from reading UI file 'processpicker.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSPICKER_H
#define UI_PROCESSPICKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessPicker
{
public:
    QWidget *centralwidget;
    QPushButton *selectButton;
    QPushButton *cancelButton;
    QTableWidget *processes;
    QPushButton *refreshButton;
    QLineEdit *searchBar;

    void setupUi(QMainWindow *ProcessPicker)
    {
        if (ProcessPicker->objectName().isEmpty())
            ProcessPicker->setObjectName(QString::fromUtf8("ProcessPicker"));
        ProcessPicker->resize(400, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProcessPicker->sizePolicy().hasHeightForWidth());
        ProcessPicker->setSizePolicy(sizePolicy);
        ProcessPicker->setMinimumSize(QSize(400, 800));
        ProcessPicker->setMaximumSize(QSize(400, 800));
        centralwidget = new QWidget(ProcessPicker);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        selectButton = new QPushButton(centralwidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(150, 740, 100, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(16);
        selectButton->setFont(font);
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(290, 740, 100, 30));
        cancelButton->setFont(font);
        processes = new QTableWidget(centralwidget);
        if (processes->columnCount() < 3)
            processes->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        processes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        processes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        processes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        processes->setObjectName(QString::fromUtf8("processes"));
        processes->setGeometry(QRect(10, 10, 380, 660));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(8);
        processes->setFont(font1);
        processes->setStyleSheet(QString::fromUtf8("QHeaderView::down-arrow { subcontrol-origin:content; subcontrol-position: center left; width: 12px; height: 15px; }\n"
"QHeaderView::up-arrow { subcontrol-origin:content; subcontrol-position: center left; width: 12px; height: 15px; }"));
        processes->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        processes->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        processes->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        processes->setAutoScroll(false);
        processes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        processes->setSelectionMode(QAbstractItemView::SingleSelection);
        processes->setSortingEnabled(true);
        processes->horizontalHeader()->setVisible(true);
        processes->horizontalHeader()->setHighlightSections(false);
        processes->verticalHeader()->setVisible(false);
        processes->verticalHeader()->setHighlightSections(false);
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(10, 740, 100, 30));
        refreshButton->setFont(font);
        searchBar = new QLineEdit(centralwidget);
        searchBar->setObjectName(QString::fromUtf8("searchBar"));
        searchBar->setGeometry(QRect(10, 690, 380, 20));
        searchBar->setReadOnly(false);
        ProcessPicker->setCentralWidget(centralwidget);

        retranslateUi(ProcessPicker);

        QMetaObject::connectSlotsByName(ProcessPicker);
    } // setupUi

    void retranslateUi(QMainWindow *ProcessPicker)
    {
        ProcessPicker->setWindowTitle(QApplication::translate("ProcessPicker", "Process Picker", nullptr));
        selectButton->setText(QApplication::translate("ProcessPicker", "Select", nullptr));
        cancelButton->setText(QApplication::translate("ProcessPicker", "Close", nullptr));
        QTableWidgetItem *___qtablewidgetitem = processes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ProcessPicker", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = processes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ProcessPicker", "PID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = processes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ProcessPicker", "Arch", nullptr));
        refreshButton->setText(QApplication::translate("ProcessPicker", "Refresh", nullptr));
        searchBar->setText(QString());
        searchBar->setPlaceholderText(QApplication::translate("ProcessPicker", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessPicker: public Ui_ProcessPicker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSPICKER_H
