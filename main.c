#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int bigbang(void){
	printk("The world is created");
	return 0;
}

static void warhead(void){
	printk("boooooooooooooooom, t*e wO*lD iS desTRo*eD");
}

module_init(bigbang);
module_exit(warhead);
