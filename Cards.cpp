#include "Cards.h"

enum class Rank {
    Ace,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    count,
};

enum class Suit {
    Spades,
    Hearts,
    Diamonds,
    Clubs,
    count,
};

// Pick a random card form the deck (represented by an int between 0-52)
// - params: none
// - return: an int between 0 - 51
// pickRandomCard();
int pickRandomCard() {
    int card { pickRandomNumberInRange(0, 51) };
    return card;
}

// Get the rank of a specific card index
// - param 1: an int representing the card index
// - return: an enum representing the Rank of the card index given.
// getRank();
Rank getRank(int cardIndex) {
    return static_cast<Rank>(cardIndex % Constants::NUM_RANKS);
} 

// Get the suit of a specific card index
// - param 1: an int representing the card index
// - return: an enum representing the Suit of the card index given.
// getSuit();
Suit getSuit(int cardIndex) {
    return static_cast<Suit>(0);
}

// A function to assess whether all elements in a boolean array are true
// You can use this function to determine whether all suits have been picked.
// - param 1: an array of boolean values (decide if it should be const or not)
// - param 2: ? do we need any other parameters here to make this work? You decide.
// - return: a bool : true if ALL the elements in param 1 are true, false otherwise.
// allArrayElementsAreTrue();
bool allArrayElementsAreTrue(const bool *boolArray, const int size) {
    return true;
}

// This is the function that does all the work behind solving the problem (including sending output to the console)
// This function should create/use an array of Boolean values (all initially false) to represent the suits that have been picked
// It should make use of allArrayElementsAreTrue() to test if all suits have been picked.
// - param 1: a bool called "verbose" (meaning wordy) that defaults to true.
//      If verbose is true, generate output cards picked & the pick count.
// - return: an int representing the number of card picks it takes to cover 4 suits.
// getPickCountNeededForFourSuits();
int getPickCountNeededForFourSuits(bool verbose = true) {
    return 0;
}
