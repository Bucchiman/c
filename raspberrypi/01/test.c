/*
 * FileName:     test
 * Author:       8ucchiman
 * CreatedDate:  2023-02-25 18:25:13 +0900
 * LastModified: 2023-02-25 18:37:47 +0900
 * Reference:    https://qiita.com/iwatake2222/items/1fdd2e0faaaa868a2db2
 */


#include <linux/module.h>

static int test_init(void) {
    printk("Hello my module\n");
    return 0;
}


static void test_exit(void) {
    printk("Bye bye my module\n");
}

module_init(test_init);
module_exit(test_exit);
