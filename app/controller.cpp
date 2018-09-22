/// Copyright 2018 <Copyright Owner- Siddhesh Rane>
#include "controller.h"
/**
 * Initialize all values to 0.0
 * if default constructor is called.
 */
PID::PID() {

}
/**
 * Initialize controller gains
 */
PID::PID(const double &kp, const double& ki, const double& kd) {

}
/// Default destructor
PID::~PID() {
}
/**
 * Calculate target velocity using Kp, Ki
 * and Kd member variables
 */
double PID::compute(const double& setPoint, const double& currentVel) {
  return 0;
}
/**
 * Set new values to member variables of the class
 */
void PID::setParameters(const double &kp, const double& ki, const double& kd) {
  return 0;
}
/// Return value of Ki member variable
double PID::getKi() {
  return 0;
}
/// Return value of Kp member variable
double PID::getKp() {
  return 0;
}
/// Return value of Kd member variable
double PID::getKd() {
  return 0;
}

