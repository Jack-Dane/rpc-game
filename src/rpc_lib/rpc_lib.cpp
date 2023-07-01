#include <string>

#include "rpc_lib.h"

using namespace std;

const string options[3] = {
        "rock", "paper", "scissors"
};

int compute_choice_index(string choice) {
    int choiceIndex = -1;
    for (int i = 0; i < sizeof(options); i++) {
        if (choice == options[i]) {
            choiceIndex = i;
            break;
        }
    }
    return choiceIndex;
}

string compute_result(int userChoiceIndex, int computerChoiceIndex) {
    if ((computerChoiceIndex + 1) % 3 == userChoiceIndex) {
        return "Win!";
    } else if ((userChoiceIndex + 1) % 3 == computerChoiceIndex) {
        return "Loss!";
    } else {
        return "Draw!";
    }
}
