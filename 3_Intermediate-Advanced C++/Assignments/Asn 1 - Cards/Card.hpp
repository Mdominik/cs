#include <iostream>

class Card {
public:
    void setSuit(char* suit) {m_suit = suit;}
    void setSuit(char rank) {m_rank = rank;}
    std::string getSuit() const { return m_suit;}
    char getRank() const { return m_rank; }
    enum Suit {clubs, diamonds, hearts, spades};
private:
    Suit m_suit;
    char m_rank;
}
