while true; do
    if ! ln ex2.txt ex2.txt.lock
    then
       sleep 2
    else
        for ((i = 0; i < 5000; i++)) do
		value=$(tail -1 ex2.txt)
		num=$(expr $value + 1)
		echo $num>>ex2.txt
        done
		rm ex2.txt.lock
        break
    fi
done