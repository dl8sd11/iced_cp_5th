---
author: ToMmyDong
title: 競賽入門
date: September ??, 2019
---
# 自我介紹

## 陳冠辰

- 社團老屁股 [0th, 5th]
- 4th 社長
- IOI 1!
- tmd910607@gmail.com

## My Lecture

上學期

- C++ Basic
- Data Structure 1
- Tree 0
- Tree 1

# 競賽程式

## 簡單來說

輸入->輸出->Accepted

## Online Judge

- Codeforces
- Green Judge
- TIOJ
- TPOJ

## Tools

- ~~電腦~~
- ~~頭腦~~
- 編輯器
- 編譯器

## Or

Dev C++ = 編輯器 + 編譯器

## Demo

# I/O

## Hello ICED

```c++
#include <iostream>

int main () {
    std::cout << "Hello ICED!!!" << std::endl;
}
```

## Header

```c++
#include <iostream>
```

## main function

```c++
int main () {
    std::cout << "Hello ICED!!!" << std::endl;
}
```

## cout

```c++
std::cout // 輸出
std::endl // 換行
```

## std??

```c++
#include <iostream>
using namespace std;

int main () {
    cout << "Hello ICED!!!" << endl;
}
```

```c++
#include <iostream>

int main () {
    std::cout << "Hello ICED!!!" << std::endl;
}
```

## Input

```c++
#include <iostream>
using namespace std;

int main () {
    int a, b;               // 宣告兩個變數

    cin >> a >> b;
    cout << a + b << endl;
}
```

# 運算子

## 算術運算子

```c++
int a = 9, b = 4;
cout << a + b << endl;  // 13
cout << a - b << endl;  // 5
cout << a * b << endl;  // 36
cout << a / b << endl;  // 2
cout << a % b << endl;  // 1
```

## 除法

```c++
int a = 9, b = 4;
double c = 9, d = 4;
cout << a / b << endl;  // 2
cout << c / d << endl;  // 2.25
cout << double(a) / b << endl;
```

## 一個等號

```c++
int a = 1, b = 2;
int c = 3;
c = c + a + b;
```

## 算術運算子 + 等號
```c++
int a = 1, b = 2;
int c = 3;

c += a + b;
/*
相當於
c = c + a + b;
*/
```

## 比較運算子

```c++
int a = 3, b = 6;
cout << (a > b) << endl;
cout << (a < b) << endl;
cout << (a >= b) << endl;
cout << (a <= b) << endl;
cout << (a == b) << endl;
cout << (a != b) << endl;
```

# 判斷式

## if....

```c++
int score;
cin >> score;
if (score >= 60) {
    cout << "安全" << endl;
} else if (score >= 50) {
    cout << "補考" << endl;
} else {
    cout << "死當" << endl;
}
```

## switch

```c++
char c;
cin >> c;
switch (c)
    {
    case 'A':
        cout << "厲害" << endl;
        break;
    case 'B':
        cout << "普通" << endl;
        break;
    case 'C':
        cout << "有點廢" << endl;
        break;
    default:
        break;
    }
```

# 迴圈 1 + 2 + .... + 100

## while loop

```c++
int sum = 0, i = 1;
while (i <= 100) {
    sum += i;
    i++;
}
```

## for loop

```c++
int sum = 0;
for (int i = 1; i <= 100; i++) {
    sum += i;
}
```

# Data Structure

## 1D array

```c++
int fab[10];
fab[0] = 0;
fab[1] = 1;
for (int i = 2; i < 10; i++) {
    fab[i] = fab[i - 1] + fab[i - 2];
}
```

## 2D array

```c++
int fab[10][10];
fab[2][3] = 4;
cout << fab[2][3] << endl;
```

## ND array

```c++
int fab[10][10][10][10]...[10];
```

## More...

Standard Template Library (STL)

- pair, tuple
- vector, string
- set, map, multiset, multimap
-  priority_queue
- queue, stack, deque

# Scope

## 外而內

```c++
    int a;
    if (true) {
        cout << a << endl;
        int b;
    }

    /* cout << b << endl;  Compiler Error*/
```

## Global Variable

```c++
    int a; // Global Variable

    int main () {
        /* Code */
    }
```

# Coding Style

## 真的很重要

雖然不是每個選手都有遵守

- 減少 bug
- 讓別人看得懂
- ~~讓自己看得懂~~

## Tabs

巢狀結構要加 Tab
```c++
if (true) {
    for (; ;) {
        while (true) {

        }
    }
}
```

## 2 wide 4 wide

you decide :)

## 大括號位置

```c++
if (true) {

}

if (true) 
{

}
```

## 命名

盡量統一且有意義

- veryMeaningfulName
- meaningful_name_seperated_by_dash

## 0 base / 1 base

固定就好

## 速度和品質的取捨

test

# End

## Homework

- [Green Judge A000 ~ A050](http://www.tcgs.tc.edu.tw:1218/Problems?tab=tab00)

## Learn More

- [TIOJ 2016建中校內培訓講義](https://tioj.ck.tp.edu.tw/articles/5)
