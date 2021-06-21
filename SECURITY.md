# Security Policy
## Checked Versions

This section is to tell people about which versions of this project are
currently being supported with security updates.

| Version | Codename           | Safe             | Supported         | Release date |
| ------- | --------           | -----            | ------------      | ------------ |
| 0.0     | NEEDABLE START     |:white_check_mark:| :x:               | Undefined    |
| 1.0     |                    |:x:               | :x:               | Undefined    |
| 1.1     |                    |:x:               | :x:               | Undefined    |
| 2.0     | REDLINE            |:white_check_mark:| :white_check_mark:| 21.06.2021   |

### 0.0 :anchor:
The basic `newcpp`. Time creation is approximately: 2020 in May; while `newcpp` was previous named `NeedableFunctions`, which creation time is unknown.
### 1.0
It is not fully tested because of function `GetLastValueInt`.
### 1.1 ⚔️
- Removed `Print` function, changed `RealisticPrint` to `Print`.
- Performance slowed bit down in `Print`(was `RealisticPrint`).
- Added `GnomeSort` function(in `sortfunctions` namespace).
- Added `namespace COLORS`.
### 2.0 ⚓
- Removed `UpStr` function.
- Added time as parameter in `Press` and `DoublePress` functions.
- Fixed `GetJunk` function.
- Fixed `Write` function(division by zero error).
- Added `Random` function.

## Vulnerabilities

This section to tell people how to report a vulnerability.

In case of finding any of a vulnerability, please open new issue(https://github.com/JeniaD/newcpp/issues).

## Bugs

### 1.1 (maybe also 1.0)
- `Write` function: can be passed argument `maxTime` as `0`. Function may crush, by dividing by zero. `Print` function also.
- `const int GetJunk(T r = 10) { if (r == r) return 10; }` - not returning junk.

<br><hr>
:chart: Legend:
- :crossed_swords: - revolution in progress
- :chart_with_upwards_trend: - gaining popularity
- :anchor: - ~stable release
