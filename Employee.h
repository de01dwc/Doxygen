/**
 * @file Employee.h
 * @author Matthew Deck
 * @date 2023-11-17
 * @brief 
 * 
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * 
 *
 * @class Employee Employee.h "Doxygen/Employee.h"
 * @brief 
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
 * 
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * 
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * 
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary();

/**
 * 
 *
 * @pre 
 * @post 
 * 
 */
  Employee();

/**
 * 
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @pre 
 * @post 
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
