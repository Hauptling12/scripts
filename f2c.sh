#!/bin/zsh
a=$2
case $1 in
"-f")
	# c = f
	echo $(($a*1.8+32))
;;
"-h")
echo "-c Fahrenheit number
-f Celsius number
-h show this message"
;;
"-c")
	#f = c
	echo $((($a-32)*0.5556))

;;
esac
