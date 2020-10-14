
340 system calls, 不同的architecure会有所不同
```
  include/uapi/asm-generic/unistd.h


  wc -l unistd.h           # how many lines


  grep -i read !$          # -i: case insensitive, !$: 上一个命令的output


  grep "define __NR" unistd.h | wc -l
```