class PID {
  public:
    PID(double);
    double calculate(double, double);

  private:
    double _Kp;
};