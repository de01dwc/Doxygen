/**
 * @file Supervisor.h
 * @author Matthew Deck
 * @date 2023-11-17
 * @brief 
 * 
 * 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * 
 *
 * @class Supervisor Supervisor.h "Doxygen/Supervisor.h"
 * @brief 
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * 
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * 
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();

/**
 * 
 *
 * @pre 
 * @post 
 * 
 */
  Supervisor();

/**
 * 
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param int numSupervised 
 * @pre 
 * @post 
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
