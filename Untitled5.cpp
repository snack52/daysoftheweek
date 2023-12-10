#include <iostream>
using namespace std;
void erroring() {
    cout << "I ain't doing that kind of stuff";

}
bool is_leap(int temp_year){
    if (temp_year % 4 == 0){
        if (temp_year % 100 == 0){
            if (temp_year % 400 == 0){
                     return true;
            }
            else{
                return false;
            }
        }
        else
                return true;
        }
    else {
        return false;
    }
}
int main() {
    for (int i; i<1000; i++) {
        int year;
        cout << "year";
        cin >> year;
        int month;
        cout << "month";
        cin >> month;
        int day;
        cout << "day";
        cin >> day;
        int days_that_passed = 0;
        int years_that_passed = 1;
        if (years_that_passed<0 || month>12){
          erroring();
        }
        else {
            for (int i = 1970; i < year; i++){
                if ( is_leap(i)== true)
                {
                        days_that_passed += 366;
                }
                else { days_that_passed += 365;


        }

            }
            for ( int min = 1; min < month; min++){
                switch (min) {
                    case 1:
                        days_that_passed += 31;
                        break;
                    case 2:
                        if (is_leap(year)== true){
                            days_that_passed += 29;
                        }
                        else {
                            days_that_passed += 28;
                        }
                        break;
                    case 3:
                        days_that_passed += 31;
                        break;
                    case 4:
                        days_that_passed += 30;
                        break;
                    case 5:
                        days_that_passed += 31;
                        break;
                    case 6:
                        days_that_passed += 30;
                        break;
                    case 7:
                        days_that_passed += 31;
                        break;
                    case 8:
                        days_that_passed += 31;
                        break;
                    case 9:
                        days_that_passed += 30;
                        break;
                    case 10:
                        days_that_passed += 31;
                        break;
                    case 11:
                        days_that_passed += 30;
                        break;
                    case 12:
                        days_that_passed += 31;
                        break;
                }

            }
            days_that_passed += day - 1;
        }
        int home = ((days_that_passed % 7 + 7) - 4) % 7;
        if (home < 0){
             home += 7;
        }
        cout << home;
        string days_of_the_week[7] = {"Monday", "Tuesday","Wednesday", "Thursday","Friday","Saturday", "Sunday"} ;
        cout << days_of_the_week[home] << "\n";
        cout<<days_that_passed << "\n";
    }
}
