<h1>Documentation</h1>

A list of functions in `newcpp`:

```C++
bool DirExist(const string& path);
```
*If you need to know if dir exists, you can call this function, giving path as parameter.*
<hr>

```C++
wstring StringToWString(const string s);
```
Simple convertor from string to wstring

*Getting string variable as parameter, returning wstring.*
<hr>

```C++
LPSTR StrToLPSTR(string s);
```
Simple convertor from string to LPSTR

*Getting string as parameter, returning LPSTR.*
<hr>

```C++
LPCWSTR s2ws(const std::string& s);
```
Simple convertor from string to LPCWSTR

*Getting string as parameter, returning LPCWSTR.*
<hr>

```C++
bool isCharNumber(char c);
```
Returns true if given char is number.

*Getting char as parameter, returning bool(true if char is number, false otherwise).*
<hr>

```C++
string DeleteAllChars(string s, char c);
string DeleteAllChars(string s, string chars);
```
Deleting all given chars from string and returns it.

*Getting string and char/string as parameter, returning bool(true if char is number, false otherwise).*
<hr>

```C++
string ReplaceAll(string str, const string& from, const string& to);
```
Replacing string in text to another string. <b>Not fully tested.</b>

*Getting string and char/string as parameter, returning bool(true if char is number, false otherwise).*
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

*Getting string as parameter. Returns upper-cased string.*

`UpStr` dont returns string, but making it upper case.

*Getting string& as parameter. Returns nothing.*
<hr>

```C++
#include<newcpp>
```
C++ `newcpp` library documentation. License in the "LICENSE" file.
