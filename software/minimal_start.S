# Minimal startup for C code

    .section .text.init
    .global _start

_start:
    # Set up stack pointer
    la sp, _stack_top
    
    # Align to 16 bytes
    andi sp, sp, -16
    
    # Call C main
    call c_main
    
    # Infinite loop if main returns
_exit:
    j _exit
