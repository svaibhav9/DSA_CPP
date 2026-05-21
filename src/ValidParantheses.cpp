#include "ValidParantheses.hpp"
#include <string>
#include <stack>


using namespace std;
bool ValidParantheses::isValid(std::string s)
{
    if (s.length()%2 != 0)
            return false;
        stack <char> s1;
        for(char ch : s)
        {
            if (ch == '{' || ch == '[' || ch == '(')
                s1.push(ch);

            else{
            if(s1.empty())
                return false;
            if (ch == '}' && ('{' == s1.top())){
                s1.pop();    
            }
            else if (ch == ']' && ('[' == s1.top())){
                s1.pop();    
            }
            else if (ch == ')' && ('(' == s1.top())){
                s1.pop();    
            }
            else 
                return false;
            }
        }
        return s1.empty();
}
