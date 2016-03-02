#include <stdio.h>
#include <math.h>

void instructions(void);
int calculate(int, double, double);

int main(void) {
  int t, arrival;
  double distance, speed;

  instructions();

  printf("Please enter the arrival time in military format\n");
  scanf("%d", &arrival);

  printf("Please enter the distance in kms\n");
  scanf("%lf", &distance);

  printf("Please enter the average speed in kms/h\n");
  scanf("%lf", &speed);

  printf("If arrival time is %d, you should leave at %d\n", arrival, calculate(arrival, distance, speed));
  printf("If arrival time is %d, you should leave at %d\n", 930, calculate(930, distance, speed));
  printf("If arrival time is %d, you should leave at %d\n", 830, calculate(830, distance, speed));
}

void instructions(void)
{
  printf("This program calculates the departure time in order to be on time\n");
  printf("for a meeting where distance, average speed and arrival time are variales!\n");
}
int calculate(int arrival, double distance, double speed)
{
  int departure, t, hours, minutes;

  t = (distance / speed) * 60;
  arrival = 60 * (arrival / 100) + (arrival % 100);
  hours = (arrival - t) / 60 * 100;
  minutes = (arrival - t) % 60;
  departure = hours + minutes;

  return departure;
}
