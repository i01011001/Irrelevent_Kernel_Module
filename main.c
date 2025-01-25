#include <linux/init.h>
#include <linux/module.h>

/**
 * brief mandatory meta data
 **/
MODULE_LICENSE("GPL");


/**
 * @brief function that run when the module is inserted
 * @return static int
 **/
static int main_init(void){
	printk("A module was created\n");
	return 0;
}

/**
 * @brief  function that run when the module is removed
 **/
static void main_exit(void){
	printk("A modules was destroyed\n");
}

module_init(main_init);
module_exit(main_exit);
