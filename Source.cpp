#include <iostream>
#include <string>
using namespace std;

class player_profile
{
private:
    string name;
    string team;
    int att, comp, yards, td, inter;
    float qbr;
public:
    player_profile(string, string, int, int, int, int, int);
    void print();
};

player_profile::player_profile(string namenum, string teamnum, int attnum, int compnum, int yardsnum, int tdnum, int internum)
{
    att = attnum; comp = compnum; yards = yardsnum; td = tdnum; inter = internum, name = namenum, team = teamnum;

    float a = (((float)comp / (float)att) - 0.3) * 5.0;
    float b = (((float)yards / (float)att) - 3.0) * 0.25;
    float c = (((float)td / (float)att) * 20.0);
    float d = (2.375 - (((float)inter / (float)att) * 25.0));

    cout << a << endl << b << endl << c << endl << d << endl;

    qbr = ((a + b + c + d) / 6) * 100;

}

void player_profile::print()
{
    cout << "Name:" << name << endl;
    cout << "Team:" << team << endl;
    cout << "QB Rating:" << qbr << endl;
}


int main()
{
    player_profile Quarterback("Tom Brady", "Buccaneers", 346, 226, 2398, 20, 7);
    Quarterback.print();

    return 0;



}