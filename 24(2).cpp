#include <iostream> 
using namespace std;

int main() {
    char s[100];
    int maxLength = 0, currentLength = 0;

    puts("Enter sentence:");
    gets_s(s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == 'A')
            currentLength++;
        else {
            if(currentLength > maxLength)
                maxLength = currentLength;
            currentLength = 0;
        }
    }

    if(currentLength > maxLength)
        maxLength = currentLength;

    cout << "Longest sequence of 'A': " << maxLength << endl;

    return 0;
}
