#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Skriv inn et tall mellom 1 og 10: ";
    string sNum;
    getline(std::cin, sNum);

    int iNum = stoi(sNum);
    cout << iNum;
    int top = 10, bot = 1;
    if (iNum > 1 && iNum < 11) {
        for (int i = -1; i < iNum; i++) {
            for (int y = -1; y < i; y++) {
                cout << iNum;
            }
            cout << "\n";
        }
    }
    else {
        cout << "\n Tallet er ikke mellom 1 og 10.";
    }

    return 0;

}
