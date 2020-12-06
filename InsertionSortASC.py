#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat May 23 15:20:53 2020

@author: family
"""


def insertionSort(A):
    i = 1
    n = len(A)
    while i < n:
        k = i
        j = i-1
        while j>=0:
            if A[k]>= A[j]:
                break
            changeValues(A, k, j)
            k = j
            j = j-1
        i = i + 1

def changeValues(A, i, j):
    aux = A[i]
    A[i] = A[j]
    A[j] = aux    
    

n = input("Insert number of elements: ")
A = list(n)
A = input().split()
 
insertionSort(A)
for i in A:
    print(i)
    


