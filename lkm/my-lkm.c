#inlcude <linux/int.h>
#inlcude <linux/module.h>
#inlcude <linux/sched.h>

int init_simple(void){
  printk("in init module simple\n");
}


void cleanup_simple(void){
  printk("in cleanup module simple\n");
}

module_init(init_simple);
module_exit(cleanup_simple);






