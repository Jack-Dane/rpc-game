#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "rpc_lib/rpc_lib.h"

using namespace std;

int main() {
    srand((unsigned) time(nullptr));

    int computerChoiceIndex = rand() % 3;
    string computerChoice = options[computerChoiceIndex];

    cout << "Choose an options (rock, paper, scissors): \n";

    string userOption;
    cin >> userOption;

    int userChoiceIndex = compute_choice_index(userOption);

    if (userChoiceIndex == -1) {
        cout << "Invalid option: " + userOption;
        return 1;
    }

    cout << "Computer option: " + computerChoice + "\n";
    cout << "User option: " + userOption + "\n";

    string result = compute_result(userChoiceIndex, computerChoiceIndex);
    cout << result;

    return 0;
}
