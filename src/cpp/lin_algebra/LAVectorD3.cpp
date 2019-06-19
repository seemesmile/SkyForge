#include "LAVectorD3.h"
#include <cmath>
using namespace std;

//
//Using LAVector methods in Doyub Kim's Fluid Engine Development as a guide.
//
//Constructors
LAVectorD3::LAVectorD3(){
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

LAVectorD3::LAVectorD3(double x_in, double y_in, double z_in){
  x = x_in;
  y = y_in;
  z = z_in;
}

LAVectorD3::LAVectorD3(const LAVectorD3& vector){
  x = vector.x;
  y = vector.y;
  z = vector.z;
}

//Instance Operators
const LAVectorD3& LAVectorD3::operator =(const LAVectorD3& v){
  x = v.x;
  y = v.y;
  z = v.z;

  return *this;
}

const LAVectorD3& LAVectorD3::operator +=(double a){
  x += a;
  y += a;
  z += a;

  return *this;
}

const LAVectorD3& LAVectorD3::operator +=(const LAVectorD3& v){
  x += v.x;
  y += v.y;
  z += v.z;

  return *this
}

const LAVectorD3& LAVectorD3::operator -=(double a){
  x -= a;
  y -= a;
  z -= a;

  return *this;
}

const LAVectorD3& LAVectorD3::operator -=(const LAVectorD3& v){
  x -= v.x;
  y -= v.y;
  z -= v.z;

  return *this
}

const LAVectorD3& LAVectorD3::operator *=(double a){
  x *= a;
  y *= a;
  z *= a;

  return *this;
}

LAVectorD3& LAVectorD3::operator*=(const LAVectorD3& v){
  x *= v.x;
  y *= v.y;
  z *= v.z;

  return *this;
}

const LAVectorD3& LAVectorD3::normalize(){
  double normalizationConstant = 1.0 / sqrt(x * x + y * y + z * z);
  x *= normalizationConstant;
  y *= normalizationConstant;
  z *= normalizationConstant;

  return *this;
}

double LAVectorD3::dot(const LAVectorD3& v){
  return v.x * x + v.y * y + v.z * z;
}

//Global Operators
LAVectorD3 operator +(const LAVectorD3& a, double b){
  LAVectorD3 returnVal;
  returnVal.x = a.x + b;
  returnVal.y = a.y + b;
  returnVal.z = a.z + b;

  return returnVal;
}

LAVectorD3 operator +(double a, const LAVectorD3& b){
  LAVectorD3 returnVal;
  returnVal.x = b.x + a;
  returnVal.y = b.y + a;
  returnVal.z = b.z + a;

  return returnVal;
}

LAVectorD3 operator +(const LAVectorD3& a, const LAVectorD3& b){
  LAVectorD3 returnVal;
  returnVal.x = a.x + b.x;
  returnVal.y = a.y + b.y;
  returnVal.z = a.z + b.z;

  return returnVal;
}

LAVectorD3 operator -(const LAVectorD3& a, double b){
  LAVectorD3 returnVal;
  returnVal.x = a.x - b;
  returnVal.y = a.y - b;
  returnVal.z = a.z - b;

  return returnVal;
}

LAVectorD3 operator -(double a, const LAVectorD3& b){
  LAVectorD3 returnVal;
  returnVal.x = b.x - a;
  returnVal.y = b.y - a;
  returnVal.z = b.z - a;

  return returnVal;
}

LAVectorD3 operator -(const LAVectorD3& a, const LAVectorD3& b){
  LAVectorD3 returnVal;
  returnVal.x = a.x - b.x;
  returnVal.y = a.y - b.y;
  returnVal.z = a.z - b.z;

  return returnVal;
}

LAVectorD3 operator *(const LAVectorD3& a, double b){
  LAVectorD3 returnVal;
  returnVal.x = a.x * b;
  returnVal.y = a.y * b;
  returnVal.z = a.z * b;

  return returnVal;
}

LAVectorD3 operator *(double a, const LAVectorD3& b){
  LAVectorD3 returnVal;
  returnVal.x = b.x * a;
  returnVal.y = b.y * a;
  returnVal.z = b.z * a;

  return returnVal;
}

LAVectorD3 operator *(const LAVectorD3& a, const LAVectorD3& b){
  LAVectorD3 returnVal;
  returnVal.x = a.x * b.x;
  returnVal.y = a.y * b.y;
  returnVal.z = a.z * b.z;

  return returnVal;
}

LAVectorD3 operator /(const LAVectorD3& a, double b){
  LAVectorD3 returnVal;
  returnVal.x = a.x / b;
  returnVal.y = a.y / b;
  returnVal.z = a.z / b;

  return returnVal;
}

LAVectorD3 operator /(double a, const LAVectorD3& b){
  LAVectorD3 returnVal;
  returnVal.x = a / b.x;
  returnVal.y = a / b.y;
  returnVal.z = a / b.z;

  return returnVal;
}

LAVectorD3 operator /(const LAVectorD3& a, const LAVectorD3& b){
  LAVectorD3 returnVal;
  returnVal.x = a.x / b.x;
  returnVal.y = a.y / b.y;
  returnVal.z = a.z / b.z;

  return returnVal;
}

LAVectorD3 sin(const LAVectorD3& a){
  return LAVectorD3(sin(a.x), sin(a.y), sin(a.z));
}

LAVectorD3 cos(const LAVectorD3& a){
  return LAVectorD3(cos(a.x), cos(a.y), cos(a.z));
}

LAVectorD3 sqrt(const LAVectorD3& a){
  return LAVectorD3(sqrt(a.x), sqrt(a.y), sqrt(a.z));
}

LAVectorD3 pow(const LAVectorD3& a, double exponent){
  return LAVectorD3(pow(a.x, exponent), pow(a.y, exponent), pow(a.z, exponent));
}

LAVectorD3 exp(const LAVectorD3& a){
  return LAVectorD3(exp(a.x), exp(a.y), exp(a.z));
}