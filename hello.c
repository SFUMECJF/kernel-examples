#include <linux/init.h>
#include <linux/module.h>

static int _init hello_init(void)
{
	printk(KERN_INFO "Hello World enter\n");
	return 0;
}
module_init(hello_init);

static voin _exit hello_exit(void)
{
	printk(KERN_INFO "Hello World exit \n");
}
module_exit(hello_exit);

MODULE_AUTHOR("ZEFENG LEE <email@qq.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("FIRST HELLO WORLD MODULE");
MODULE_ALIAS("a simplest module");
