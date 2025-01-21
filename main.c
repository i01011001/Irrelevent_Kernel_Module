#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int main_init(void){
	printk("A module was created\n");
	return 0;
}

static void main_exit(void){
	printk("A modules was destroyed\n");
}

module_init(main_init);
module_exit(main_exit);
