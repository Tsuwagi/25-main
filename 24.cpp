#include <iostream> 
using namespace std;

int main() {
    char s[100];
    int Count = 0;

    puts("Enter sentence:");
    gets_s(s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(isdigit(s[i])) {
            Count++;
        }
    }

    cout << "digits: " << Count << endl;

    return 0;
}
