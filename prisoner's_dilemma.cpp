#include <iostream>
#include <string>

using namespace std;

int main() {
    string player1, player2, play;
    int p1point = 0, p2point = 0, ground = 0, rounds;

    cout << "Press 'y' to play prisoner's dilemma" << endl;
    cin >> play;

    while (play == "y" || play == "Y") {
            cout << "how many rounds long do you want it to be" << endl;
            int round = 1;
    cin >> rounds;
        for (int i = 0; i < rounds; i++) {
            cout << "round no." << round << endl;
            cout << "Player 1's turn. Press 'd' to defect and 'c' to cooperate: ";
            cin >> player1;

            cout << "Player 2's turn. Press 'd' to defect and 'c' to cooperate: ";
            cin >> player2;
            round++ ;
            if ((player1 == "c" || player1 == "C") && (player2 == "c" || player2 == "C")) {
                p1point += 3;
                p2point += 3;
            } else if ((player1 == "d" || player1 == "D") && (player2 == "c" || player2 == "C")) {
                p1point += 5;
            } else if ((player1 == "c" || player1 == "C") && (player2 == "d" || player2 == "D")) {
                p2point += 5;
            } else if ((player1 == "d" || player1 == "D") && (player2 == "d" || player2 == "D")) {
                ground++;
            }
        }

        if (p1point > p2point) {
            cout << "Player 1 won. Player 1's points: " << p1point << ". Player 2's points: " << p2point << endl;
        } else if (p1point < p2point) {
            cout << "Player 2 won. Player 1's points: " << p1point << ". Player 2's points: " << p2point << endl;
        } else {
            cout << "Draw. Player 1's points: " << p1point << ". Player 2's points: " << p2point << endl;
        }

        cout << "Do you wish to play again? (y/n): ";
        cin >> play;
    }

    return 0;
}
