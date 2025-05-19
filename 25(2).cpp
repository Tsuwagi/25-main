#include <iostream>
using namespace std;

int main() {
    char s[100], result[100] = "", wr[100];
    int i = 0, j = 0;

    puts("Enter sentence:");
    cin.getline(s,100);

    while (s[i] != '\0') {
        if (s[i] != ' ')
            wr[j++] = s[i];
        else {
            wr[j] = '\0';
           // if (strlen(wr) > 6 )
                //if(strlen(result) > 0 )
                    //strcat(result, " ");
            // strcat(result, wr);
            j = 0;
        }
        i++;
    }
    cout << "Result: " << result << endl;
}
