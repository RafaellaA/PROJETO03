#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QColor>
#include <QAction>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    //float amplitude = 1.0,frequencia = 1,velocidade = 0.0,angulo = 0.0;
    //int timerId;
    //QColor background;
    //QAction *actionOpcao;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    //void timerEvent(QTimerEvent *event);
    //void mousePressEvent(QMouseEvent *event);
    //void mouseMoveEvent(QMouseEvent *event);
    //void contextMenuEvent(QContextMenuEvent *event);

signals:
    //void mudouX(int);
    //void mudouY(int);

public slots:
    //void setAmplitude(int _amplitude);
    //void setFrequencia(int _frequencia);
    //void setVelocidade(int _velocidade);
    //void mudacor(void);


};

#endif // PLOTTER_H
