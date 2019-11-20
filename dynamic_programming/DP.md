---
author: Chris Yang
title: Dynamic Programming
date: November 20th, 2019
---
# DP

## 把算過的東西存起來

```c++
#include <iostream>
using namespace std;
int main () {
    //calculate Fibonacci Sequence.
   int n , f[105];
   cin >> n ;
   f[0] = f[1] = 1 ;
   for(int i = 2;i <= n;i ++)f[i] = f[i-1] + f[i-2];
   cout << f[n] << endl;
}
```

## 沒有用DP的例子

```c++
#include <iostream>
using namespace std;
int F(int w){
    if(w == 0 || w == 1)return 1;
    return F(w-1) + F(w-2);
}
int main () {
    int n;
    cin >> n;
    cout << F(n) << endl;
}
```

## 遞迴式的DP

```c++
#include <iostream>
using namespace std;
int n , dp[105];
int F(int w){
    if(w == 0 || w == 1)return 1;
    if(dp[w] != -1){
        //dp[w] is calculated.
        return dp[w];
    }
    return dp[w] = F(w-1) + F(w-2) ;
}
int main () {
    cin >> n;
    for(int i = 2;i <= n;i ++)dp[i] = -1;
    cout << F(n) << endl;
}
```

# 狀態 & 轉移

## CodeForces 1249E

有一棟n樓的建物，從第i樓到第i+1樓(或從第i+1樓走到第i樓)，走樓梯需要花費$a_i$秒，搭電梯需要花費$b_i$秒。

在每一層，你可以選擇花c秒進入電梯，或不花費時間從電梯中出來。

你當前在一樓，求對於每一樓，你走到該樓至少需要花費多少秒。
(2<=n<=200000，1<=c,a,b<=1000)

## 定義狀態

dp[i]代表從1樓到i樓要幾秒

dp[i]=min(dp[i-1]+a[i-1],dp[i-1]+c+b[i-1)

## Wrong Answer

## 重新定義狀態

dp[i][0]代表從一樓到i樓電梯外要幾秒

dp[i][1]代表從一樓到i樓電梯內要幾秒

dp[i][0]=min(dp[i-1][0]+a[i-1],dp[i-1][1]+b[i-1])

dp[i][1]=min(dp[i][0]+c,dp[i-1][1]+b[i-1])

# 練習題

## green judge b024~b033

## Codeforces 1114D

# 滾動

## 

如果某些狀態之後用不到

例如dp[i][j]=dp[i-1][j]+dp[i][j-1]

可以看出只有算dp[i+1][j]跟dp[i][j+1]時會用到dp[i][j]

```c++
#include <iostream>
using namespace std;
int main(){
    int n,m,dp[2][105];
    cin >> n >> m;
    for(int i = 0;i < n;i ++)for(int j = 0;j < m;j ++){
        if(i == 0||j == 0)dp[i % 2][j] = 1;
        else{
            dp[i % 2][j] = dp[(i - 1 + 2) % 2][j] + dp[i % 2][j - 1];
        }
    }
    cout << dp[(n - 1 + 2) % 2][m] << "\n";
    return 0;
}
```

## 沒什麼用的滾動

滾動可以替空間複雜度省一個維度。

雖然大部分時候空間的限制跟時間的限制差不多。

