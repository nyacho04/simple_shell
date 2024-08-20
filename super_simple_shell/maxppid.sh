#!/bin/bash
maxppid=$(cat /proc/sys/kernel/pid_max)
echo "The max value of PID is: $maxppid"
