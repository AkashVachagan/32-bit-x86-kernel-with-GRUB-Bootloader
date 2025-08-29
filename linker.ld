OUTPUT_FORMAT(elf32-i386)
ENTRY(start)

SECTIONS
{
    . = 1M;

    .text :
    {
        *(.multiboot)
        *(.text)
        . = ALIGN(4K);
    }

    .data :
    {
        *(.data)
    }

    .bss :
    {
        *(.bss)
    }
}

