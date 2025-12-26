#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
using namespace std;

#define el "\n"
typedef long long ll;
typedef long double ld;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
FIO
string c;
cin >>c;
int blue=0;
int red=0;
for (char i:c)
if(i=='0'){
red+=1;
}


else if (i == '1') {
    blue++;
    }

    cout << 2 * min(red, blue) << "\n";







}