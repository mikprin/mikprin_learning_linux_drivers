#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>



static int __init my_driver_init(void)
{
    printk("Welcome to my driver! Hi to Cookie directly from kernel!\n");
    return 0;
}


static void __exit my_driver_exit(void)
{
    printk("Leaving my driver!\n");
    return;
}

module_init(my_driver_init);
module_exit(my_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Low Level Learning");
MODULE_DESCRIPTION("Test of writing drivers");
MODULE_VERSION("1.0");