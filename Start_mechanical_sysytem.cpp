#include <iostream>
using namespace std;

int main() {
    double load, effort;
    const double mechanicalAdvantage = 1.0; // Fixed pulley

    cout << "Fixed Pulley System (Ideal)\n";
    cout << "Enter load (N): ";
    cin >> load;

    effort = load / mechanicalAdvantage;

    cout << "\nResults:\n";
    cout << "Mechanical Advantage: " << mechanicalAdvantage << endl;
    cout << "Required Effort (N): " << effort << endl;

    return 0;
}