---
author: Chris Yang
title: Greedy & Searching
date: October 15th, 2019
---
# Greedy

## 貪心

每一步都採取對當前狀況最有利的選擇

並非所有問題採用貪心演算法都能得到最佳解

ex:背包問題中，永遠選擇cp值最高的物品不一定能達到最佳解

*背包問題:

你有n個物品和容量為m的背包，每個物品都有各自的價值跟大小

你希望選擇某些物品使得物品大小總和小於等於m且物品價值總和最大


## Greedy = 觀察 + 假設 + 證明

## 題目

數線上有n個線段，每個線段有固定的起點$l_i$跟終點$r_i$

求找出一個最大的線段集合，使得集合中沒有線段重疊

## DP?

$$ 0 <= l <= r <= 10^9 $$

## 觀察

定義$f(i)$代表區間$[i,10^9]$中找得到的最大集合的大小，可以知道$f(i) >= f(i+1)$
(所求即$f(-1)$)

## 解法

```c++
#include<bit/stdc++.h>
using namespace std;
int main(){
	int n,l,r,ans=0,x=-1;
	vector<int> seg;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l>>r;
		seg.push_back(mp(l,r));
	}
	sort(seg.begin(),seg.end(),[](pair<int,int> a,pair<int,int> b){
		return a.second<b.second;
	});
	for(int i=0;i<n;i++){
		if(seg[i].first>x){
			ans++;x=seg[i].second+1;
		}
	}
	cout<<ans<<"\n";
}
```

# Binary Search

## 題目

給定n個由小到大排的整數跟k，問該n個整數中大於等於k的數中的最小值

## 檢查n個數字

$$ O(N) $$

## 觀察

如果第i個數小於k，第i-1,i-2...,1個數也都會小於k。

## 解

已知答案出現在區間(l,r]，令mid=(r+l)/2

如果a[mid]>=k，則答案不可能會在區間(mid,r]

反之，答案不可能會在區間(l,mid]

刪去不可能的區間直到區間大小剩一

複雜度:每次詢問都會刪掉原先區間的一半 $$ O(logN) $$

## Code

```c++
#include<iostream>
using namespace std;
int main(){
	int n,k,a[105];
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	int l=0,r=n;
	while(l<r-1){
		int mid=(r+l)/2;
		if(a[mid]>=k){
			r=mid;
		}else{
			l=mid;
		}
	}
	cout<<a[r]<<"\n";
}
```
## 題外話

有單調性的東西都可以二分搜

Greedy算不出來可以考慮對答案二分搜(ex: [田忌賽馬](http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=h098)) 




