#include <QtWidgets/QMainWindow>
#include "ui_ProjectName.h"

class ProjectName : public QMainWindow
{
    Q_OBJECT

public:
    ProjectName(QWidget *parent = nullptr);
    ~ProjectName();

private:
    Ui::ProjectNameClass *ui;
    //labels and stuff pointers

public slots:
    //functions with buttons and stuff
};
