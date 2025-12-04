#!/bin/bash
n=26

nice -n 10 bash tkachenko2.sh &
sleep $n

nice -n 10 bash tkachenko3.sh &
sleep $n
