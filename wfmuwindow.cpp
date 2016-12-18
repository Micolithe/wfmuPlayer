#include "wfmuwindow.h"
#include "ui_wfmuwindow.h"
#include "stdlib.h"
//QT Multimedia Includes -- Required for Audio Playback
#include <QSound>
#include <QUrl>
#include <QString>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMediaMetaData>
#include <QTimer>

//globals

QUrl filepath[] = {QUrl("http://stream0.wfmu.org/freeform-128k"), //WFMU
                   QUrl("http://stream0.wfmu.org/ichiban"), //ROCK & ROLL ICHIBAN
                   QUrl("http://stream0.wfmu.org/do-or-diy"), //RADIO BOREDCAST
                   QUrl("http://stream0.wfmu.org/drummer"), //GIVE THE DRUMMER RADIO
                  };
QMediaPlayer *player = new QMediaPlayer;
QMediaPlaylist *plist = new QMediaPlaylist;
int strnum = 0;
QString strname = "WFMU 91.1 FM";
bool playing = false;
QTimer *t = new QTimer;



wfmuWindow::wfmuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::wfmuWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("WFMU Audio Player");
    this->setWindowIcon(QIcon(":/wfmu_ICON.ico"));
    player->setVolume(50); //start at half volume

}

wfmuWindow::~wfmuWindow() //exit
{
    delete ui;
}
void wfmuWindow::on_buttonPLAY_clicked() //Play button clicked

{
    player->stop();
    plist->clear();
    plist->addMedia(filepath[strnum]);
    player->setPlaylist(plist);
    player->play();
    ui->labelSTREAMNAME->setText(strname);
    playing = true;
    //fires the timer to update the artist/title labels
    connect(t,SIGNAL(timeout()),this,SLOT(textUpdate()));
    t->start(1000);
}


void wfmuWindow::on_buttonSTOP_clicked() //Stop button clicked
{
    player->stop();
    plist->clear();
    ui->labelARTIST->clear();
    ui->labelTITLE->clear();
    ui->labelSTREAMNAME->clear();
    playing = false;

}

void wfmuWindow::on_boxSTREAMSELECT_currentIndexChanged(int index)
{
    strnum = index; //sets the index of the array to be passed to the audio player.
    strname = ui->boxSTREAMSELECT->currentText();
}

void wfmuWindow::on_horizontalSlider_valueChanged(int value)
{
    player->setVolume(value); //volume adjustment
}

void wfmuWindow::textUpdate(){
    ui->labelARTIST->setText(player->metaData(QMediaMetaData::Author).toString());
    ui->labelTITLE->setText(player->metaData(QMediaMetaData::Title).toString());
}

