# Loadable Kernel Moduless(LKMs)
- An object file with .ko suffix
- Witten in C and compiled for a particula kernel version - not binary compatible with other kernels
- /lib/modules


```
  lsmod | wc -l
```

```
  find . -name '*.ko' | wc -l
```
```
  make -C /lib/modules/$(uname -r)/build  M=$PWD modules
```








