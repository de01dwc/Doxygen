/**
 * @file Officer.h
 * @author Matthew Deck
 * @date 2023-11-17
 * @brief an Employee object as rank Officer
 * 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * Officer class inherits from Employee class. Provides methods for displaying
 * information and calculating pay specific to an Officer.
 *
 * @class Officer Officer.h "Doxygen/Officer.h"
 * @brief Officer rank Employee
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * Displays Officer information to the standard output
 *
 * @return void 
 * 
 */
  void print();

/**
 * Returns the calculated pay based on rate and hours, adjusted for evilness.
 *
 * @return double the total pay
 * 
 */
  double calculatePay();

/**
 * Default constructor sets evilness to 500, and all other values to -1
 * 
 */
  Officer();

/**
 * Parameterized constructor to initialize object to specific values
 *
 * @param int ID the Employee ID
 * @param int years the total number of years worked
 * @param double hourlyRate  the hourly rate of pay
 * @param float hoursWorked the total number of hours worked
 * @param double evilness the evilness factor
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
