#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int bigbang(void){
	printk("The world is created");
	return 0;
}

static void nucleur(void){
	printk("boooooooooooooooom, t*e wO*lD iS desTRo*eD");
	// printk("The world is created");
}

module_init(bigbang);
module_exit(nucleur);
