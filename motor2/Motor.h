
#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

#define L_IN1 22
#define L_IN2 24
#define L_ENA 10

#define L_IN3 26
#define L_IN4 28
#define L_ENB 11

#define R_IN1 42
#define R_IN2 44
#define R_ENA 8

#define R_IN3 38
#define R_IN4 40
#define R_ENB 9

class Motor {
public:
  Motor();
  void begin(void);                      // sets motor pins as OUTPUT
  inline void setSpeed(int Lspeed, int Rspeed); // sets pwm signal sent to motor shied
  void brake(void);                      // brake in case of urgent stop
  void turn_left(int speed, int amount); // amount stands for 10 degrees per number
  void turn_right(int speed, int amount); // amount stands for 10 degrees per number
  int R_count;
  int L_count;
  bool brakeState;
  ~Motor();

private:
};

#endif
