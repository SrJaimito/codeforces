#!/bin/bash

mkdir $1
cd $1

echo "#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

    return 0;
}
" > main.cpp

echo -e 'main: main.cpp
\tg++ $< -o $@ -std=c++14 -O2 -Wall
' > Makefile

