#include "ProjectName.h"

ProjectName::ProjectName(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::ProjectNameClass) //"Class" must be there
{
    ui->setupUi(this);
}

ProjectName::~ProjectName()
{

}
