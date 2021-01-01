# Linux Boot Process

1. Firmware stage
  Firmware executes the boot loader(grub2) code on disk.

    BIOS use /boot/grub2/grub.cfg
    
    UEFI use /boot/EFI/redhat/grub.efi

2. Boot loader state
  
    Bootloader execute teh kernel

3. Kernel stage

    Kernel loads the ramdisk into ram. The ramdisk serves as a temporary root file system.

    Kernel load device drivers and config files from ramdisk

    Kernel unmount ramdisk and mounts root fielsystem

    Then, starts the initialization stage.

4. Initialization Stage

    Kernel starts the grandfather process (systemd)

    Systemd starts system services

    Systemd starts login shells and GUI
    
      


