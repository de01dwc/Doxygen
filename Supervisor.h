/**
 * @file Supervisor.h
 * @author Matthew Deck
 * @date 2023-11-17
 * @brief Supervisor ranked Employee
 * 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * Supervisor class inherits from Employee class. Provides methods for displaying
 * information and calculating pay specific to an Officer
 *
 * @class Supervisor Supervisor.h "Doxygen/Supervisor.h"
 * @brief Supervisor rank Employee
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * Displays Supervisor information to the standard output
 *
 * @return void 
 * 
 */
  void print();

/**
 * Returns the calculated pay based on rate and hours, adjusted for the number of employees being supervised
 *
 * @return double the total pay
 * 
 */
  double calculatePay();

/**
 * Default constructor sets all values to -1
 *
 * 
 */
  Supervisor();

/**
 * Parameterized constructor to initialize object to specific values
 *
 * @param int ID the Employee ID
 * @param int years the total number of years worked
 * @param double hourlyRate the hourly rate of pay
 * @param float hoursWorked the total number of hours worked
 * @param int numSupervised the number of employees being supervised by this supervisor
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
