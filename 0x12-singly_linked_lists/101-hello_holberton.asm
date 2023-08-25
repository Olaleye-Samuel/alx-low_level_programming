 global    main
          extern    printf
main:
	  edi   mov, call
	  xor   eax, eax
	  format  printf
	  ret 	eax, 0
	  mov
format: db `Hello, Holberton\n`,0
