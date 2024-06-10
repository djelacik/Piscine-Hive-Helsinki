ifconfig -a | grep -w "ether" | sed -e "s/[[:blank:]]//g" -e "s/ether//g"
