# newcpp
The C++ library for more comfortable programming

A newcpp is library for more comfortable C++.

<h3>Here are some info:</h3>
To start, needs to write:

```C++
#include<newcpp> //Depends on where did it placed and how does it named. \
                 It can be renamed from "newcpp.cpp" to "newcpp" for this line to be true.
```
<hr>

```C++
#define REDCONSOLE 4
#define GREENCONSOLE 2
#define YELLOWCONSOLE 14
```


it is a colors for console. It can be used for
`ChangeColor(color);`
, where color is `int` variable.

Next, maybe, will be useful some of they:

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
