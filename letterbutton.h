#ifndef LETTERBUTTON_H
#define LETTERBUTTON_H

#include <QLabel>
#include <QChar>
#include <QList>
#include <QColor>
#include <QMouseEvent>

class LetterButton : public QLabel
{
    Q_OBJECT
public:
    LetterButton(QChar c, QWidget *parent = 0);
signals:
    void clicked();
public slots:
    void mousePressEvent(QMouseEvent * )
    {
        m_down = true;
    }
    void mouseReleaseEvent(QMouseEvent * )
    {
        if(m_down)
        emit clicked();
        m_down = false;
    }
    void updateColors();
    void setTheme(QColor, QColor, int);
//    void setFont(QFont);
    void on_clicked();
    void on_reset();
private:
    bool m_down;
    int m_state;
    QList <QColor> m_colors;
};

#endif // LETTERBUTTON_H
