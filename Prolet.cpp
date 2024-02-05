#include <iostream>
#include <string>

//this program calculates the projected contribution to the GDP in a given year and quarter. 
int get_int();
//Establish variabls and functions for get int
double calculate_per_capita_gdp_estimate(int RemainingQuarters);
std::string format_money(double money);
std::string quarter_to_ordinal(int quarter);
std::string total = "";
std::string Quarter = "";

int main() {
// establish variables and constants
int YearEntered = 0;
int QuarterEntered = 0;
int QuartersInYear = 4;
int epochYear = 1977;
int epochq = epochYear * QuartersInYear;
//prompt users for year and quarter
std::cout << "Please enter the year for the calculation: ";
YearEntered = get_int();
std::cout << "Please enter the quarter for the calculation: ";
QuarterEntered = get_int();
//calculations of total quarters from year 0 to entered year,
//and GDP amount
int TotalQuarters = (YearEntered * 4) + (QuarterEntered - 1);
int RemainingQuarters = TotalQuarters - epochq;
double GDP = calculate_per_capita_gdp_estimate(RemainingQuarters);
Quarter = quarter_to_ordinal(QuarterEntered);
total = format_money(GDP);
//print out for user to see
std::cout << "In the " << Quarter << " quarter of " << YearEntered << ", the projected contribution to GDP per working-age person is $" << total << ".\n";
}


