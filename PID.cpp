#include "PID.h"

PID::PID(double Kp) {
  _Kp = Kp;
}

double PID::calculate(double pv, double sp) {
  return _Kp * (pv - sp);
}