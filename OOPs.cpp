#include <iostream>
#include <iomanip>
using namespace std;
class time
{
private:
int seconds;
int HH,MM,SS;
public:
void gettime(void);
void convertintoseconds(void);
void displaytime (void);
};
void time : :gettime(void)
{
cout << "enter time:" << endl;
cout << "hours? ";           cin >> HH;
cout << "minutes? ";         cin >> MM;
cout << "seconds? ";         cin >> SS;
}
void time: :convertintoseconds(void)
{
seconds = HH*3600 + MM*60 +SS;
}
void time: :displaytime(void)
{
cout << "the time is = " << setw(2) << setfill('0') << HH << ":"
                         << setw(2) << setfill('0') << MM << ":"
                         << setw(2) << setfill('0') << SS << endl;
cout << "time in total seconds: " << seconds;
}
int main()
{
time t: :displaytime(void)
{
t.gettime();
t.convertintoseconds();
t.displaytime();
return 0;
}
