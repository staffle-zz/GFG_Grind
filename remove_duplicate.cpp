#include <iostream>
using namespace std;

int main() 
{
    int nCases;
    cin >> nCases;
    getchar();
    char c;
    while (nCases--)
    {
        int count[256] = {0};
        while (((c = getchar()) != '\n') && (c != EOF))
        {
            if (count[c]++ == 0)
                putc(c, stdout);
        }
        printf("\n");
    }
	//code
	return 0;
}
