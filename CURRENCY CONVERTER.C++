#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Choose the converter type\n1) USD to INR\n2) INR to USD\nChoose option: ";
    cin >> n;

    switch (n) {
    case 1: {
        float INR, USD;
        cout << "Enter USD value: ";
        cin >> USD;
        INR = 79.8635f * USD;
        cout << INR << endl;
        break;
    }
    case 2: {
        float INR, USD;
        cout << "Enter INR value: ";
        cin >> INR;
        USD = 0.0125f * INR;
        cout << USD << endl;
        break;
    }
    default:
        cout << "Invalid option" << endl;
    }

    return 0;
}
