#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <QObject>
#include <QHash>
#include <QString>
#include <QMap>

class Dictionary : public QObject
{
    Q_OBJECT
public:
    explicit Dictionary(QObject *parent = 0);
    bool contains(QString, bool correct_length = true);
    int wordLength(){ return m_wordLength;}
    QString getNewSecretWord(int difficulty, bool allowDoubleLetters);
    void loadFrequencyList();
    QList <int> getWordLengths(){ return m_allowedWordLengths;}

    static bool hasDoubleLetters(QString word)
    {
        bool hasDoubleLetters = false;

        for(int i = 0; i < word.length(); i++)
        {
            for(int j = i+1; j < word.length(); j++)
            {
                if(word.at(j) == word.at(i))
                {
                    return true;
                }
            }
        }
        return false;
    }

signals:

public slots:
    void init();
    void setWordLength(int);
    void setWordLength(QString str){ setWordLength(str.toInt());}

private:
    QList <int> m_allowedWordLengths;
    int m_wordLength;
    QMap < int, QHash <QString, int> *> m_map;
//    QHash <QString, int> six_letter_words;
//    QHash <QString, int> five_letter_words;
};

#endif // DICTIONARY_H
