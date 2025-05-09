//	Вивести перше слово введеного рядка у зворотному порядку

#include <iostream>
using namespace std;

int main() {
    char s[100];
    char wr[100];
    
    puts("Enter sentence:");
    gets_s(s);

    int i = 0, j = 0;
    while (s[i] != '\0' && s[i] != ' ') {
        wr[j++] = s[i++];
    }
    wr[j] = '\0'; 

    strrev(wr);

    cout << wr << endl;

    return 0;
}
