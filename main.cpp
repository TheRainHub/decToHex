#include <iostream>
using namespace std;

/*Bonusová otázka
 *                                    Mykhailo Plokhin
 * oct 31 == dec 25
 * (octal) 3x5 + 1   (decimal)  2x10 + 5
*/

int main()
{
    int n, i;
    string res="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    cout << "Ender Decimal number: ";
    cin >> n;

    while (n > 0){
        i = n % 16;
        res = hex[i] + res;
        n = n/16;
    }
    cout << "Number equals: "<<res<<"\n";
}