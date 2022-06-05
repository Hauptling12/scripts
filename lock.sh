#!/bin/bash
clear
while [ 1 ]
do
	x=`hcitool scan|grep -e "88:54:1F:04:CE:A2"`
	if [ "$x" != "" ]
	then
		slock
	else
		ls
		clear

	fi
done
