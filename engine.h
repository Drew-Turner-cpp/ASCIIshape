#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// For string mult. operator, 
// credit to https://stackoverflow.com/users/417292/jcoder for the function
std::string operator*(std::string s, size_t count)
{
    std::string ret;
    for(size_t i = 0; i < count; ++i)
    {
        ret = ret + s;
    }
    return ret;
}


// Draws a rectangle based on the args x and y. and fills it in if fillQ is true
void drawRect(int x, int y, bool fillQ)
{
    // Variable definition/declaration
    string pix = "0";
    string space = " ";
    string Xline, Yline;

    // Handles the lenth of the x axis of the square
    for (int iter = 0; iter <= x; iter = iter + 1)
    {
        Xline = Xline + pix;
        if (iter == x - 1)  // Added "- 1" because it was appending one to many chars
        {
            break;
        }
    }

    // Conditional block for bool argument
    if (fillQ)
    {
        cout << Xline << endl;  // Prints first line
        
        for (int iter = 0; iter <= y; iter = iter + 1)
        {
            int inbetween = x - 2;
            Yline = (Yline + pix) + (space * inbetween) + (Yline + pix);
            cout << Yline << endl;
            Yline = "";

            if(iter == y - 2)  // "- 2" because of the added line in the beginning of the statement
            {
                cout << Xline << endl;
                break;
            }
        }
    }

    else if (!fillQ)
    {
        for (int iter = 0; iter <= y; iter = iter + 1)
        {
            cout << Xline << endl;

            if(iter == y - 1)  // again "- 1" because it was appending one to many lines 
            {
                break;
            } 
        }
    }
}
