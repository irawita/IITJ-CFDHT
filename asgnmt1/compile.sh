#!/bin/bash
g++ src/helpers.cc src/"$2".cc -Wall -g -o exec/"$2" >exec/"$1" 2>&1

