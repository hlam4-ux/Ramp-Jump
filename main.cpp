#include <cmath> //I add cmath
#include <iostream>
using namespace std;

int main()
{
  const double g = 32.17405;
  const double pi = 3.141592654;

  double h, v, angle;

  //I use cout to prompt the user fdor input and then use cin to receive data
  cout << " Enter ramp height";
  cin >> h;
  cout << "Enter velocity";
  cin >> v;
  cout << "Enter angle";
  cin >> angle;

  double rad = angle * (pi / 180);

  double vx = v * cos(rad);
  double vy = v * sin(rad);

  //I first calulate an intermediate value and then use it to determine the time this I also use the square root 
  double temp = vy * vy + 2 * g * h;
  double time = (vy + sqrt(temp)) / g;
  //I calculate the maximum height, the horizontal distance, and the velocity upon landing.
  double maxH = h + (vy * vy) / (2 * g);
  double dist = vx * time;
  double speed = sqrt(vx * vx + temp);

  cout << "vx" << vx << endl;
  cout << "time" << time << endl;
  cout << "max height" << maxH << endl;
  cout << "distance" << dist << endl;
  cout << "speed" << speed << endl;
  
  return 0;
}
