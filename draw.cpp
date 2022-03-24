#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctime>
using namespace std;

#define HEIGHT 40
#define WIDTH 120

int main() {
    system("cls");
    char window[HEIGHT][WIDTH];

    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            window[i][j] = ' ';

            if(i == 0 && j == 0) window[i][j] = static_cast<char>(201);
            if(i == 0 && j > 0) window[i][j] = static_cast<char>(205);
            if(i == 0 && j == (WIDTH - 1)) window[i][j] = static_cast<char>(187);
            if(i > 0 && j == 0) window[i][j] = static_cast<char>(186);
            if(j == (WIDTH - 1) && i > 0) window[i][j] = static_cast<char>(186);
            if(i == (HEIGHT - 1)) window[i][j] = static_cast<char>(205);
            if(i == (HEIGHT - 1) && j == 0) window[i][j] = static_cast<char>(200);
            if(i == (HEIGHT - 1) && j == (WIDTH - 1)) window[i][j] = static_cast<char>(188);
        }
    }

    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            cout << window[i][j];
        }
        cout << endl;
    }

    time_t now = time(0);

    tm *ltm = localtime(&now);

    cout << "Current date: " << 1900 + ltm->tm_year << " / " << ltm->tm_mday << " / " << ltm->tm_mon << "\n";

    char colorname;
    cout << "Enter color name: [g = green,r = red or b = blue]\n";
    cout << "To exit input then press e" << endl;

    while(colorname != 'e') {
        cin >> colorname;

        switch(colorname) {
            case 'g':
            system("color 2");
            break;

            case 'r':
            system("color 4");
            break;

            case 'b':
            system("color 1");
            break;

            case 'e':
            system("pause");
            break;

            default:
            cout << "Please enter correct value\n";
            break;
        }
    }

    system("pause>nul");
    return 0;
}
