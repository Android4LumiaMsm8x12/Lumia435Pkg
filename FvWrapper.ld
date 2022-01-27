ENTRY(_start);

SECTIONS
{
    _start = 0x0EC00000;
    . = 0x0EC00000;
    .data : {
        *(.data)
    }
}
