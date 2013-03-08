Passgen
=======
Password Generation Utility
by Zach Young <zach@zavtralabs.com>

I'm sure there are better ones out there, but I wrote this ages ago, and 
it's still useful. When cryptographic perfection isn't necessary, this 
works pretty well.

Building
--------
To build type `make`. Executable can be moved wherever is convenient. 
This program was built on Linux and Mac OS X using GCC. Other compilers 
should also work, but none have been tested.

Use
---
`./passgen`

Parameters
----------
* -n=<num> Number of passwords to generate
* -l=<num> Length of passwords
* -s=<num> Strength (1 = [0-9], 2 = [0-9a-z], 3 = [0-9A-Za-z], 4 = [0-9A-Za-z] + special chars)
