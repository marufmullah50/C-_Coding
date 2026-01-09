#include <iostream>
using namespace std;

int main() {
    int i, j;

    cout << "\n\nYOUR NAME IN STAR PATTERN (MARUF):\n\n";

    // ----- M -----
    for(i = 1; i <= 7; i++){
        for(j = 1; j <= 7; j++){
            if(j == 1 || j == 7 || (i == j && i <= 4) || (i + j == 8 && i <= 4))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   "; // space between letters

        // ----- A -----
        for(j = 1; j <= 7; j++){
            if((i == 1 && j >= 3 && j <= 5) || // top bar
               (j == 2 && i > 1) || (j == 6 && i > 1) || // side bars
               (i == 4)) // middle bar
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // ----- R -----
        for(j = 1; j <= 7; j++){
            if(j == 1 || // left line
               (i == 1 && j < 6) || // top line
               (i == 4 && j < 6) || // middle line
               (j == 6 && i > 1 && i < 4) || // right top
               (j == i - 1 && i > 4)) // diagonal leg
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // ----- U -----
        for(j = 1; j <= 7; j++){
            if((j == 1 && i < 7) || (j == 7 && i < 7) || (i == 7 && j > 1 && j < 7))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // ----- F -----
        for(j = 1; j <= 7; j++){
            if(j == 1 || i == 1 || i == 4) // left, top, center
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    cout << "\n\n";
    return 0;
}
