#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    string country;
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    Cricketer *koli = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "India";
    koli->country = dhoni->country;
    koli->jersey_no = dhoni->jersey_no;
    delete dhoni;
    cout << koli->country << " " << koli->jersey_no;
    delete koli;
    return 0;
}
