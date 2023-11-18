/**
 * @file Officer.h
 * @author Matthew Deck
 * @date 2023-11-17
 * @brief 
 * 
 * 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * 
 *
 * @class Officer Officer.h "Doxygen/Officer.h"
 * @brief 
 *
 */
class Officer : public Employee {
 private:
  double evilness;
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
  Officer();

/**
 * 
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param double evilness 
 * @pre 
 * @post 
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
