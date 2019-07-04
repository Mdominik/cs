#include "Card.hpp"
#include <random>
#include <ctime>
#define LOG(x) std::cout << x


void deckInit(std::vector<Card*>& deck) {
    std::srand(std::time(nullptr));
    int tmp_suit, tmp_rank;
    std::string tmp_suit_str;
    std::string tmp_rank_char;
    for(int i = 0; i < 52; ++i) {
        tmp_suit=rand()%4;
        tmp_rank=rand()%12;
        switch(tmp_suit) {
            case Card::Suit::clubs:
                tmp_suit_str = "clubs";
                break;
            case Card::Suit::diamonds:
                tmp_suit_str = "diamonds";
                break;
            case Card::Suit::hearts:
                tmp_suit_str = "hearts";
                break;
            case Card::Suit::spades:
                tmp_suit_str = "spades";
                break;
        }
        switch(tmp_rank) {
            case Card::Rank::K:
                tmp_rank_char = "King";
                break;
            case Card::Rank::Q:
                tmp_rank_char = "Queen";
                break;
            case Card::Rank::J:
                tmp_rank_char = "J";
                break;
            case Card::Rank::ten:
                tmp_rank_char = "ten";
                break;
            case Card::Rank::nine:
                tmp_rank_char = "nine";
                break;
            case Card::Rank::eight:
                tmp_rank_char = "eight";
                break;
            case Card::Rank::seven:
                tmp_rank_char = "seven";
                break;
            case Card::Rank::six:
                tmp_rank_char = "six";
                break;
            case Card::Rank::five:
                tmp_rank_char = "five";
                break;
            case Card::Rank::four:
                tmp_rank_char = "four";
                break;
            case Card::Rank::three:
                tmp_rank_char = "three";
                break;
            case Card::Rank::two:
                tmp_rank_char = "two";
                break;
        }
        deck.push_back(new Card(tmp_suit_str, tmp_rank_char));
        deck[i]->print();
    }
}

void perfectShuffle(std::vector<Card*> deck) {
    std::vector<Card*> halfdeck1;
    std::vector<Card*> halfdeck2;
    int length = deck.size();
    for(int i = 0; i<length/2; i++) {
        halfdeck1.push_back(deck[i]);
    }
    for(int i = length/2; i<length; i++) {
        halfdeck2.push_back(deck[i]);
    }
    deck.clear();
    for(int i=0; i<length/2; i++){
        deck.push_back(halfdeck1[i]);
        deck.push_back(halfdeck2[i]);
    }
    for(auto card : deck) {
        card->print();
    }
    std::cout<<std::endl;
}

int main() {
    std::vector<Card*> deck{};
    deckInit(deck);
    std::cout<<std::endl;
    perfectShuffle(deck);
    perfectShuffle(deck);



    exit(0);
}
