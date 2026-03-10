/*  
Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.

Ensure only the 1st letter of the answer is capitalised.
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void whichWeekDay(int day) {
        switch (day) {
            case 1 :
                std::cout<<"Monday";
                break;
            case 2 :
                std::cout<<"Tuesday";
                break;
            case 3 :
                std::cout<<"Wednesday";
                break;
            case 4 :
                std::cout<<"Thursday";
                break;
            case 5 :
                std::cout<<"Friday";
                break;
            case 6 :
                std::cout<<"Saturday";
                break;
            case 7 :
                std::cout<<"Sunday";
                break;
            default :
                std::cout<<"Invalid";
        }

    }
};