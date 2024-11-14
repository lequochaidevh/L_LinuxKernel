make
	https://embedjournal.com/kernel-compilation-beaglebone-black/
	
	make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- make dtbs
	OR
	dtc -I dtb -O dtsarch/arm/boot/dts imx6dl-sabrelite.dtb >path/to/my_devicetree.dts
	
	
	
	
	
	

