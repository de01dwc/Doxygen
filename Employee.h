/**
 * @file Employee.h
 * @author Matthew Deck
 * @date 2023-11-17
 * @brief Employee class definition
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * Employee class stores employee pay rates, hours worked, and years of service. Provides 
 * method to display information to the standard output.
 *
 * @class Employee Employee.h "Doxygen/Employee.h"
 * @brief Base Employee object
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * Displays Employee information to the standard output
 *
 * @return virtual 
 * 
 */
  virtual void print();

/**
 * Returns the calculated pay based on rate and hours.
 *
 * @return virtual double the total pay
 * 
 */
  virtual double calculatePay();

/**
 * Increments the years worked, and increases the hourly rate by 0.2%
 *
 * @return void 
 * 
 */
  void anniversary();

/**
 * Default constructor sets all fields to -1
 *
 * 
 */
  Employee();

/**
 * Parameterized constructor to initialize object to specific values
 *
 * @param int ID the Employee ID
 * @param int years the total number of years worked
 * @param double hourlyRate the hourly rate of pay
 * @param float hoursWorked the total number of hours worked
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
