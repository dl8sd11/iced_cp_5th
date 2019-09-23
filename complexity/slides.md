---
author: Chris Yang
title: Complexity
date: September 23rd, 2019
---
# 自我介紹

## 楊景遇

- CF rating 1900(id: chris920318)
- Green Judge rank 1
- 107會考社會科A++
- APCS 滿級分
- 各種意義上的超廢

## 我負責的課程

1. Complexity
2. Greedy
3. Searching
4. 一些簡單的DP
5. Divide & Conquer

# 複雜度是什麼

## 時間複雜度

表示演算法執行所花費的時間的多項式。

只記錄最高次項並去除係數，因為我們考慮的是輸入非常龐大時演算法的表現。

像 $O(N^3+4 N^2+100N)$ 就寫成 $O(N^3)$

## 空間複雜度

簡單地說就是會用到的記憶體大小。

記法跟時間複雜度一樣。

# 如何計算複雜度

## 常數時間

加減乘除
比較大小
 $$O(1)$$

## 不只常數

N次加減乘除

$$O(N)$$

## 均攤複雜度

並不會每次操作都做一樣多事情?
```c++
#include <iostream>
int main () {
	int Q,ty,x;
	stack<int> stk;
	while(Q--){
		cin>>ty;
		if(ty==1){
			while(stk.size())stk.pop();
		}else{
			cin>>x;
			stk.push(x);
		}
	}
}
```

## 

每個值最多被pop掉一次
$$O(Q)$$

# END


