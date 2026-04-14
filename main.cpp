#include <iostream>
#include <cmath>
using namespace std;

int main()
{ const double g = 32.17405;
  const double pi = 3.141592654;

  double h, v, angle;

  cout << " Enter ramp height";
  cin >> h;
  cout << "Enter velocity";
  cin >> v;
  cout << "Enter angle";
  cin >> angle;

  double rad  = angle * pi / 180;

  double vx = v * cos(rad);
  double vy = v * sin(rad);

  double temp = vy * vy +2 * g * h;
  double time = (vy * sqrt(temp))/g;
  double maxH = h + (vy* vy) / (2 * g);
  double dist = vx * time;
  double speed = sqrt(vx * vx + temp);
  
  cout << "vx" << vx << endl;
  cout << 
  cout << "Hello world" << endl;
}
