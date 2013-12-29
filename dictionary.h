#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <QObject>
#include <QHash>
#include <QString>

class Dictionary : public QObject
{
    Q_OBJECT
public:
    explicit Dictionary(QObject *parent = 0);
    bool contains(QString);
    int wordLength(){ return m_wordLength;}
    QString getNewSecretWord(int difficulty);
    void loadFrequencyList();
signals:

public slots:
    void init();
    void setWordLength(int);

private:
    int m_wordLength;
    QHash <QString, int> six_letter_words;
    QHash <QString, int> five_letter_words;
};

#endif // DICTIONARY_H
