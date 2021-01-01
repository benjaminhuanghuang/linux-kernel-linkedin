
Find kernel version
```
  uname -r
```

Find the src page of the current kernel
```
  ls -l /lib/modules/$(uname -r)/build
```

Install dev package
```
```


```
  sudo insmod lab.ko        # run

  dmesg | tail              # check the output
```
