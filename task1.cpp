#include <iostream>
#include <cmath>
int main(){
    float a,b,c,s,x1,y1,x2,y2,x3,y3 ;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))
    b = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))
    a = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))
    if (a + b > c) and (b + c > a) and (c + a > b);
        cout >> "the triangle exists";
        s = (a + b + c)/2
        cout >> sqrt(s*(s-a)*(s-b)*(s-c))
    else
        cout >> "the triangle does not exist"
}