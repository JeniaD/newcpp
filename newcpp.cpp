#ifndef NEWCPP
    #define NEWCPP

    #include <iostream>
    #include <windows.h>
    #include <string>
    #include <ctype.h>
    #include <stdio.h>
    #include <fstream>
    #include <cctype>
    #include <algorithm>
    #include <time.h>
    #include <sstream>
    //#include <dirent.h>
    //#include <winable.h>

    //for "DirExist"
    #include <sys/stat.h>
     //#include <shlwapi.h>
    //#pragma comment (lib, "shlwapi")

    #include <vector>

    using namespace std;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    const int fileInitializeStartTime = (int)time(0);
    #define STARTTIME fileInitializeStartTime

    #define REDCONSOLE 4
    #define GREENCONSOLE 2
    #define YELLOWCONSOLE 14

    #ifdef _WIN32
        #include <io.h>
        #define access _access_s
    #else
        #include <unistd.h>
    #endif

    //Gives true if folder exist.
    bool DirExist(const string& path) {
        struct stat buffer;
        return (stat(path.c_str(), &buffer) == 0); //return PathFileExists(path.c_str());
    }

    //Returns string converted to wstring.
    wstring StringToWString(const string s) {
        std::wstring wsTmp(s.begin(), s.end());
        return wsTmp;
    }

    LPCWSTR s2ws(const std::string& s) {
        int len;
        int slength = (int)s.length() + 1;
        len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
        wchar_t* buf = new wchar_t[len];
        MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
        std::wstring r(buf);
        delete[] buf;
        //return r;

        std::wstring stemp = s2ws(s);
        return stemp.c_str();
    }

    //Returns string converted to LPSTR
    LPSTR StrToLPSTR(string s) {
        return const_cast <char*> (s.c_str());
    }

    //Returns true if given char is number
    bool isCharNumber(char c) {
        //int a = 100;
        //a = c - '0';
        return isdigit(c);
    }

    //Deleting all given chars from string and returns it.
    string DeleteAllChars(string s, char c) {
        s.erase(std::remove(s.begin(), s.end(), c), s.end());
        /*for(int i = 0; i < s.length(); i++)
          if(s[i] == c)
              s[i] = '\0';*/
        return s;
    }

    //Deleting chars from first parameter that are in second.
    string DeleteAllChars(string s, string chars) {
        for (int i = 0; i < chars.length(); i++)
            s = DeleteAllChars(s, chars[i]);
        return s;
    }

    /*Replacing string in text to another string. Not fully tested.
    Usage:
    ReplaceAll(string("Hi and hi"), std::string(" "), std::string("_"))
    Returns:
    "Hi_and_hi"*/
    string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
        size_t start_pos = 0;
        while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
            str.replace(start_pos, from.length(), to);
            start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
        }
        return str;
    }

    //Returns a chracter table length.
    int CharacterTableLength() {
        char a = 'a' + 1;
        int counter = 1;
        while (a != 'a') {
            a++;
            counter++;
        }

        return counter;
    }

    //Returns string to uppercase
    string UpperString(string s) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        return s;
    }

    //Changes the string to uppercase
    void UpStr(string& s) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    template < typename T >
    string NumberToString(T pNumber) {
        ostringstream oOStrStream;
        oOStrStream << pNumber;
        return oOStrStream.str();
    }

    template < class element, class container >
    bool PartOfArray(element elem, container array) {
        for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
            if (elem == array[i])
                return true;

        return false;
    }

    //Returns true if __access_s function returns 0 (~file exists)
    bool FileExists(const std::string& Filename) {
        return _access(Filename.c_str(), 0) == 0;
    }

    //Printing text with setted color
    void Print(string s, int color) { //12, 4 - red; 2, 10 - green; 15 - maybe black; 14 - yellow
        SetConsoleTextAttribute(hConsole, color);
        cout << s;
        SetConsoleTextAttribute(hConsole, 15); //2);
    }

    //Printing char with setted color
    void Print(char s, int color) { //12, 4 - red; 2, 10 - green; 15 - maybe black; 14 - yellow
        SetConsoleTextAttribute(hConsole, color);
        cout << s;
        SetConsoleTextAttribute(hConsole, 15); //2);
    }

    //Writes each symbol in string with function Sleep
    void Write(string s, int maxTime) {
        srand(time(0));
        for (int i = 0; i < s.length(); i++) {
            cout << s[i];
            Sleep(rand() % maxTime);
        }
    }

    //Writes string in setted color with Sleep.
    void RealisticPrint(string s, int color, int maxT) {
        SetConsoleTextAttribute(hConsole, color);
        Write(s, maxT);
        SetConsoleTextAttribute(hConsole, 15);
    }

    //Changing console text color. For changing it back, ChangeColor(15) or SetDefaultColor
    void ChangeColor(int color) {
        SetConsoleTextAttribute(hConsole, color); //15 - is back
    }

    //Setting standart color
    void SetDefaultColor() {
        SetConsoleTextAttribute(hConsole, 15);
    }

    //Simulating user press
    void Press(BYTE key) {
        keybd_event(key, 0, 0, 0);
        keybd_event(key, 0, KEYEVENTF_KEYUP, 0);
    }

    //Simulating 2 presses
    void DoublePress(BYTE key, BYTE key2) {
        keybd_event(key, 0, 0, 0);
        keybd_event(key2, 0, 0, 0);

        keybd_event(key, 0, KEYEVENTF_KEYUP, 0);
        keybd_event(key2, 0, KEYEVENTF_KEYUP, 0);
    }

    //Class for bruteforcing.
    class Chance {
    private:
        const char zero = 1;
        const char nine = 0;

        string s = "";

        void PlusPlus() {
            int a = 0;
            while (true) {
                if (a > s.length()) {
                    s += zero;
                    break;
                }
                else if (s[a] == nine) {
                    s[a] = zero;
                    a++;
                }
                else {
                    s[a]++;
                    break;
                }
            }
        }
    public:
        //Give next string guess
        string GiveNextGuess() {
            PlusPlus();
            return s;
        }

        //Setting start length of brute-force string. Can be given as normal(parameter 2 but s is maybe ['', ''])
        void SetStartLength(int l) {
            if (l <= 0)
                return;
            s.clear();
            for (int i = 0; i < l; i++)
                s += zero;
        }
    };
#endif
