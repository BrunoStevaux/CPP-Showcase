#ifndef HEADER_H
#define HEADER_H

class setOper
{
private:
  double lowerBoundary;
  double upperBoundary;

public:
  setOper();

  // Setters and getters
  void set(double lower, double upper);
  void get();
  double getUpper();
  double getLower();
};

// Assignment requirements
bool belongs_(double number, setOper set);
bool intersection_(double number, setOper set1, setOper set2);
bool union_(double number, setOper set1, setOper set2);

#endif
