# 32-bit x86 Kernel with GRUB Bootloader

This project demonstrates a simple 32-bit x86 kernel booted using GRUB. It includes a custom bootloader in assembly and a basic C kernel that prints messages to the screen via VGA text mode.

## Requirements

Install the required tools on Ubuntu:

```bash
sudo apt update
sudo apt install -y qemu binutils gcc make grub-common nasm xorriso
```

## Build the kernel and ISO
```bash
make
```

## Run the kernel in QEMU
```bash
qemu-system-i386 -cdrom my-kernel.iso
```

## Clean build artifacts
```bash
make clean
```

## Notes
- This kernel is 32-bit (i386) only.
- It demonstrates VGA text output and basic kernel structure.
