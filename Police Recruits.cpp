//Link Problem==>https://codeforces.com/problemset/problem/427/A
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
int counter[1000001] = {};
int main()
{
    ahmed
        ll t, n, cpolice=0, ctreated=0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n == -1 and cpolice == 0) {
            ctreated++;
        }
        else if (n >= 1) {
            cpolice += n;
        }
        else if (cpolice >= 1 and n == -1) {
            cpolice--;
        }
    }cout << ctreated << endl;
}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف
