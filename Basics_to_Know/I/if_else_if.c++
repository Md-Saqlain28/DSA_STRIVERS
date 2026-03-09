/*Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise.
*/
#include<iostream>
class Solution {
public:
    void studentGrade(int marks) {
        if(marks >= 90)
            std::cout<<"Grade A";
        else if(marks >= 70)
            std::cout<<"Grade B";
        else if(marks >= 50)
            std::cout<<"Grade c";
        else if(marks >= 35)
            std::cout<<"Grade D";
        else
            std::cout<<"Fail";
    }
};