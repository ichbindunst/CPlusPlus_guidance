#pragma once

#ifdef CALCULATION_EXPORTS
#define CALCULATION_API __declspec(dllexport)
#else
#define CALCULATION_API __declspec(dllimport)
#endif // CALCULATIO_EXPORTS

extern "C" CALCULATION_API double Add(double a, double b);
extern "C" CALCULATION_API double Subtract(double a, double b);
extern "C" CALCULATION_API double Multiply(double a, double b);
extern "C" CALCULATION_API double Divide(double a, double b);

/*
extern "C" __declspec(dllexport) double Add(double a, double b);
extern "C" __declspec(dllexport) double Subtract(double a, double b);
extern "C" __declspec(dllexport) double Multiply(double a, double b);
extern "C" __declspec(dllexport) double Divide(double a, double b);
*/

/*
__declspec(dllexport) double Add(double a, double b);
__declspec(dllexport) double Subtract(double a, double b);
__declspec(dllexport) double Multiply(double a, double b);
__declspec(dllexport) double Divide(double a, double b);
*/