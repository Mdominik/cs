#include <iostream>
#include <vector>
#include <string>

class Card {
public:
    Card(std::string& suit, std::string& rank) : m_suit{suit}, m_rank{rank}{
        number++;
        m_no = number;
    }
    void setSuit(char* suit) {m_suit = suit;}
    void setRank(char* rank) {m_rank = rank;}
    std::string getSuit() const { return m_suit;}
    std::string getRank() const { return m_rank; }
    void print() {
        std::cout << "Number: " << this->m_no << std::endl;
        std::cout << "Clubs: " << this->getSuit() << std::endl;
        std::cout << "Rank: " << this->getRank() << std::endl;

    }
    enum Suit {clubs,diamonds,hearts,spades};
    enum Rank {K, Q, J, ten, nine, eight,seven,six,five,four,three,two};
    Rank rank_enum;
    Suit suit_enum;
    static int number;
private:
    std::string m_suit;
    std::string m_rank;
    Card* next;
    int m_no;
};
