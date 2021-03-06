<h1>Documentation</h1>
Version: 2.0

**Note: information here can be outdated. Not every functions could be here. Also functions from other versions may differ.**

```C++
namespace COLORS {...}
```
Here are the colors namespace. You can use it for `ChangeColor` function, for example.
Here are the list of colors:

- `CLASSIC`
- `INVISIBLEBLACK`
- `BLUE`
- `GREEN`
- `LIGHTBLUE`
- `RED`
- `PURPLE`
- `YELLOW`
- `WHITE`
- `GREY`
- `LIGHTBLUE`
- `LIGHTGREEN`
- `CYAN`
- `LIGHTRED`
- `PINK`
- `LIGHTYELLOW`

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
Replacing string in text to another string.

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
```
`UpperString` returns upper case string;

*Getting `string` as parameter. Returns upper-cased `string`.*
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
void Write(string s, int maxTime);
```
Writes each symbol in string with some time.

*Getting `string` and `int` as parameter, returning nothing(printing in the console using cout first parameter multiplyed on second parameter + some enother system time to enter).*
<hr>

```C++
void Print(string s, int color, int maxT, int colorAfter=CLASSIC);
```
Writes each symbol in `string` with some time and color.

*Getting string and 2 int's as parameter, returning nothing(printing in the console using cout first parameter multiplyed on second parameter + some enother system time to enter).*
<hr>

```C++
void Press(BYTE key, int sleepTime = PRESSTIMESLEEP);
void DoublePress(BYTE key, BYTE key2, int sleepTime = PRESSTIMESLEEP);
```
Presses as user on keyboard. Needs to get `BYTE` as parameter. Working on OS Windows.

*Getting `BYTE`(or `BYTE` and `BYTE`) as parameter, returning nothing(pressing as user). `sleepTime` is additional parameter, which indicates what time will be given to `windows.h` library's function `Sleep` in between of press and releasing key.*
<hr>

```C++
template<class T>
T Random(T min = 0, T max = 10000);
```
Returns pseudo random number, based on `rand`. Example: `Random<int>(-5, 10)` - it may give number from -5 to 10 including.

*Getting `T`(`int`, `float`, `double`...(but float types may not work properly)) as parameter, returning `T`.*
<hr>

```C++
BruteForce bruteforceSystem; //Bruteforce system.
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

# Removed, available in previous versions
```C++
void Print(string s, int color);
void Print(char s, int color);
```
Printing `char` with setted color. For example, 12, 4 - red; 2, 10 - green; 15 - black; 14 - yellow;

*Getting `string` and `int` as parameter, returning nothing(printing in the console first parameter).*
<hr>

```C++
void UpStr(string& s);
```
`UpStr` dont returns `string`, but makes it upper case.

*Getting `string&`(adress) as parameter, and changing it. Returns nothing.*
<hr>

# Conclusion
To use this library, you could include it to your code. First, to do this, you need to download it either to your project, or where all your libraryes are stored.
```C++
#include<newcpp>
```
C++ `newcpp` library documentation. License should be in the "LICENSE" file.
