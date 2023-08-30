        global    main
          extern     printf
main:
          mov    edi, format
          xor    eax, eax
          call   printf
          nov   eax, 0
          ret
format: db Hello, Holberton\n,0
