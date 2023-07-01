#ifndef PLAY_RPC_LIB_H
#define PLAY_RPC_LIB_H

#include <string>

using namespace std;

extern const string options[3];

int compute_choice_index(string choice);
string compute_result(int userChoiceIndex, int computerChoiceIndex);

#endif //PLAY_RPC_LIB_H
