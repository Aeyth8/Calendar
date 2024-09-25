#pragma once
#include <sstream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>
#include <iostream>
#include <iomanip>

namespace Stream
{
	std::stringstream Year;
	std::stringstream Month;
	std::stringstream Day;

	std::stringstream Hour;
	std::stringstream Minute;
	std::stringstream Second;
};
namespace Clock_M//anipulation
{
	bool Is_Leap_Year(int Year);
	std::string TS(const int& I);
	std::string Prefix(const int Value);
	int Last_Day(const int& Month);
	void Reset_Int(int Power, bool Clock);
	void Tick();
	void Update_Time();
	void InitClock();
	void Constant_Clock();
	

	int Year;
	int Month;
	int Day;

	int Hour;
	int Minute;
	int Second;
	std::string Meridiem;

	bool Pre_Hour;
	bool Pre_Minute;
	bool Pre_Second;
	bool Pre_Month;
	bool Pre_Day;

	// If Separate_Values is true, then these G_ variables will be utilized, the reason for it being a choice is that these variables will dynamically change every second if Live_Clock is true.
	bool Separate_Values;
	std::string G_Year;
	std::string G_Month;
	std::string G_Day; // G'Day Mate!
	std::string G_Hour;
	std::string G_Minute;
	std::string G_Second;

	std::string Full_Date; // This will be a concatenation of all the variables combined into a singular string, as a heads up, {P} stands for Prefix, which may or may not exist depending on the number.
	// The format is : {P}Month/{P}Day/Year {P}Hour:{P}Minute:{P}Second Meridiem  
	// For a better understanding of how the prefixes work, here is an example if a prefix is valid : 01/04/2029 08:53:05 PM
	//                                                                       If a prefix is invalid : 11/15/2032 10:59:57 AM
};
