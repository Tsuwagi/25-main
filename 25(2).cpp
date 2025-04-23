#include <iostream>
using namespace std;

int main() {
    char s[100], result[100] = "", wr[100];
    int i = 0, j = 0;

    puts("Enter sentence:");
    gets_s(s);

    while (s[i]) {
        if (s[i] != ' ')
            wr[j++] = s[i];
        else {
            wr[j] = 0;
            if (strlen(wr) > 6)
                if (strlen(result)) strcat(result, " ");
                strcat(result, wr);
            j = 0;
        }
        i++;
    }

    wr[j] = 0;
    if (strlen(wr) > 6)
        if (strlen(result)) strcat(result, " ");
        strcat(result, wr);

    cout << "Result: " << result << endl;
}
