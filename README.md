# C++ newcpp library
The C++ library for more comfortable programming.

```C++
//You can call it if you want to change console color to default.
SetDefaultColor(); 

//Printing text with setted color
Print(string s, int color); //12, 4 - red; 2, 10 - green; 15 - maybe black; 14 - yellow

//Printing char with setted color
Print(char s, int color); //12, 4 - red; 2, 10 - green; 15 - maybe black; 14 - yellow

//Writes each symbol in string with function Sleep function.
Write(string s, int maxTime);

//Writes string in setted color with Sleep function.
RealisticPrint(string s, int color, int maxT);
```
