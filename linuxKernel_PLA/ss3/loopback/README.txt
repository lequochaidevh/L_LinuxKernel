Basic character device


	make
   	sudo insmod exam_cdev.ko 
   	dmesg 
   	sudo bash -c "echo 5 > /dev/char_dd" 
   	dmesg 
   	sudo cat /dev/char_dd 
   	dmesg 
   	sudo rmmod exam_cdev 
   	dmesg 
   

