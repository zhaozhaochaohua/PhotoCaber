# -*- coding: utf-8 -*-
"""
Created on Fri Sep  3 14:27:08 2021

@author: HUA
"""
import numpy as np
import pandas as pd

t12 = pd.read_csv('cts12.txt')
t3 = pd.read_csv('cts3.txt')

c12 = pd.read_csv('ccs12.txt')
c3 = pd.read_csv('ccs3.txt')
key12 = t12.loc[[1]]
key3 = t3.loc[[1]]
key12 = key12.values
key3 = key3.values

c12.columns = key12[0]
c3.columns = key3[0]

m = pd.concat([c12, c3])
m = m.fillna('0')
m.to_csv('invCalM.txt')
r = m[1]
m = m.drop(1, 1)
m['1'] = r
m.to_csv('invDynM.txt')