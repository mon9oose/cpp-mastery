#!/bin/bash

NAME=$1

g++ -std=c++11 -o $NAME $NAME.cpp
./$NAME