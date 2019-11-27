---
author: ToMmyDong
title: Graph Theory
date: October 22th, 2019
---


# Intro

## 大綱

- Definition
- Algorithms
    - Floyd Washall
    - Dijkstra
    - Bellman Ford
    - SPFA
    - **Feature** 01-BFS
- Problem

# 定義

## 路徑

## 最短路徑

# 演算法

## ~~Just Relax~~

$$dis[i][j] = min(dis[i][j], dis[i][k], dis[k][j])$$


# Floyd Warshall

## Let's DP

$dp[k][i][j] \equiv 只考慮[0..k] i 到 j 最短距離$

## 轉移

$$ dp[k][i][j] = dp[k-1][i][k] + dp[k-1][k][j] $$

(3D, 0D) ?

## MLE ?

滾動陣列

## Code ?

## 每個人都會發生過的事

# Dijkstra

## 條件

## 怎麼念

D "[ijk](https://www.youtube.com/watch?v=ILHHAK_Dmpg)" 什麼的

## 最短路徑「樹」

## Relax 順序很重要

## 證明咧?

## 點權還是邊權

CC

## Code

# Bellman Ford

## 條件

## 如果我亂更新…

V 個點要被更新

至少每 E 次更新會拓展最短路徑樹

$$O(V\cdot E)$$

## 如果我繼續更新…

做完第 N 次如果跟 N-1 次結果不一樣？

# SPFA

## 中二的名字

**Shortest Path Faster Algorithm**

## 關鍵

很多次的 Relax 都是 "假的"

如果 dis[i] 沒有被更新， 拿他來更新別人無意義

## Optimization

從 queue 裡面找點出來 Relax~

有被更新到的點再推到 queue 裡面

## Complexity

期望值: O(kE) (聽說的XD)

Worst Case: O(V\dotE)

# 01-BFS

## 為什麼 BFS 會對

邊權都是 1

+0, +0, +0, +0, +0, +0, +1, +1, +1, +1

## 如果今天有 {0, 1} 這兩種邊

- queue -> deque
- weight == 0 then push front
- weight == 1 then push back

## 正確性

+0, +0, +0, +0, +0, +0, +1, +1, +1, +1

# Problem

## 隨機想的題目

一張 V 個點 E 條邊的有相圖， 如果可以把最多一條邊反轉，求 S 到 T 點的最短距離。
