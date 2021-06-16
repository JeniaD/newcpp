<h1>Documentation</h1>
Version: 1.0 

**Note: information here can be outdated. Not every functions could be here.**

A list of functions in `newcpp`:

```C++
bool DirExist(const string& path);
```
Returning `true` if folder found. Otherwise, `false`.

*Getting string as parameter, returns true if folder(dir) found(in active directory, but path like "C:\\Users\\..." can work too).*
<hr>

```C++
wstring StringToWString(const string s);
```
Simple convertor from `string` to `wstring`

*Getting `string` variable as parameter, returning `wstring`.*
<hr>

```C++
LPSTR StrToLPSTR(string s);
```
Simple convertor from `string` to `LPSTR`

*Getting `string` as parameter, returning `LPSTR`.*
<hr>

```C++
LPCWSTR s2ws(const std::string& s);
```
Simple convertor from `string` to `LPCWSTR`

*Getting `string` as parameter, returning `LPCWSTR`.*
<hr>

```C++
bool isCharNumber(char c);
```
Returns `true` if given `char` is number.

*Getting `char` as parameter, returning `bool`(`true` if `char` is number, `false` otherwise).*
<hr>

```C++
string DeleteAllChars(string s, char c);
string DeleteAllChars(string s, string chars);
```
Deleting all given `char`s from string and returns it.

*Getting `string` and `char`/`string` as parameter, returning `bool`(true if `char` is number, `false` otherwise).*
<hr>

```C++
string ReplaceAll(string str, const string& from, const string& to);
```
Replacing string in text to another string. <b>Not fully tested.</b>

*Getting `string` and `char`/`string` as parameter, returning `bool`(`true` if `char` is number, `false` otherwise).*
<hr>

```C++
int CharacterTableLength();
```
Returns ~count of characters on computers table length. <b>Not fully tested.</b>

*Getting nothing as parameter, returning ~count of characters on computers table length.*
<hr>

```C++
string UpperString(string s);
void UpStr(string& s);
```
`UpperString` returns string made upper case;

*Getting `string` as parameter. Returns upper-cased `string`.*

`UpStr` dont returns `string`, but making it upper case.

*Getting `string&` as parameter. Returns nothing.*
<hr>

```C++
template <typename T>
string NumberToString(T pNumber);
```
Returns `string` made from number.

*Getting number(can be `int`, `float`, `double`, etc.) as parameter, returning converted parameter to `string`.*
<hr>

```C++
template <class element, class container>
bool PartOfArray(element elem, container array);
```
Returns true if element is part of container.

*Getting element(type of container) and container(like `array` or `vector`) as parameter, returning true if element found in container. Otherwise - `false`.*
<hr>

```C++
bool FileExists(const std::string& Filename);
```
Returns `true` if file exists. <b>Not fully tested.</b>

*Getting `string` as parameter, returning `true` if file found. Otherwise - `false`.*
<hr>

```C++
void Print(string s, int color);
void Print(char s, int color);
```
Printing `char` with setted color. For example, 12, 4 - red; 2, 10 - green; 15 - black; 14 - yellow;

*Getting `string` and `int` as parameter, returning nothing(printing in the console first parameter).*
<hr>

```C++
void Write(string s, int maxTime);
```
Writes each symbol in string with some time.

*Getting `string` and `int` as parameter, returning nothing(printing in the console using cout first parameter multiplyed on second parameter + some enother system time to enter).*
<hr>

```C++
void RealisticPrint(string s, int color, int maxT);
```
Writes each symbol in `string` with some time and color.

*Getting string and 2 int's as parameter, returning nothing(printing in the console using cout first parameter multiplyed on second parameter + some enother system time to enter).*
<hr>

```C++
void ChangeColor(int color);
```

*Getting `int` as parameter, returning nothing(changing color in console).*
<hr>

```C++
void SetDefaultColor();
```
Setting default color.

*Getting nothing as parameter, returning nothing(changing color in console to default).*
<hr>

```C++
void Press(BYTE key);
void DoublePress(BYTE key, BYTE key2);
```
Presses as user on keyboard. Needs to get `BYTE` as parameter. Working on OS Windows.

*Getting `BYTE`(or `BYTE` and `BYTE`) as parameter, returning nothing(pressing as user).*
<hr>

```C++
Chance bruteforceSystem; //Bruteforce system.
string possibleCombinations[1000]; //Possible 1000 combinations.
//Fill possible combinations.
for(int i = 0; i < 1000; i++)
  possibleCombinations[i] = bruteforceSystem.GiveNextGuess();
```
This is a simple use of `Chance` bruteforce tool. After this you can freely use `possibleCombinations`.
Note: number of possible combinations fixed length can variate on different computers.

*Needs to be initialized first(`Chance name;`). Next, each time called function `Chance.GiveNextGuess();` will be returned next variation of string.*

It can be used another way:
```C++
#include <iostream>
#include <string>

Chance bf;
string target = "Hello!"; //Target that needs to be guessed.
bf.SetStartLength(target.length() - 1); //This code can work better if you know sought length. This line can be removed.
while(true){
  string result = bf.GiveNextGuess(); //Get next guess.
  if(result == target) //If guess is correct,
    break;            //Do something appropriate.
}
```
# Conclusion
Those code can work, if will be included `newcpp`. If you need to use this library, you can copy `newcpp` into project, or, the main libraryes are stored. Second case is nice, if you need to use this in different projects.
```C++
#include<newcpp>
```
C++ `newcpp` library documentation. License needs to be in the "LICENSE" file.
