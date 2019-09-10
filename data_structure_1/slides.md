---
author: ToMmyDong
title: 競賽入門
date: September ??, 2019
---

# 大綱

## RMQ

- 分塊
- Segment Tree

## RMQ 進階

- Segment Trees

# RMQ

## 題目敘述

給定陣列 a[0...N] 詢問: [L, R] 最小值為何?

## 暴力

- 時間複雜度: O(N) / query
- 空建複雜度: O(N) (陣列本身記憶體)

# 分塊

## 分 10 塊

- 把 0..N 分 10 等分(塊)紀錄最小值
- 每次詢問包含到**整塊**的就直接查詢最小值 (最多 10 塊)
- 每次詢問作多包含兩端不完整塊 (最多 2 * n / 10 個)

## 分 10 塊複雜度

每次詢問 $O(\frac{n}{10}+10)$

## 分 K 塊

- 把 0..N 分 K 等分(塊)紀錄最小值
- 每次詢問包含到**整塊**的就直接查詢最小值 (最多 K 塊)
- 每次詢問作多包含兩端不完整塊 (最多 2 * n / K 個)

## 分 K 塊複雜度

每次詢問 $O(\frac{n}{K}+K)$

## 學過算幾不等式嗎

$$\frac{\frac{n}{k}+k}{2} \geq \sqrt{\frac{n}{k}*k}$$

$$O(\frac{n}{K}+K) \geq O(\sqrt{n})$$

等好發生在 $k = \sqrt{n}$

## 複雜度

所以分 $\sqrt(N)$ 塊複雜度是

$O(\sqrt{N})$ per query

## 如果要修改

隨意維護

## More

下學期課程: Square Root Decomposition

