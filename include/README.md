Include
=======

Some common files and functions used in the solutions.

Features:

* bytes:  
&nbsp;&nbsp;
str_to_bytes(): convert a hex encoded string to bytes.  
&nbsp;&nbsp;
hex_to_str(): convert bytes to a hex encoded string  

* base64:  
&nbsp;&nbsp;
base64(): convert bytes to a base64 representation  

* xor:  
&nbsp;&nbsp;
fixed_xor(): XOR two equal-length bytes arrays  
&nbsp;&nbsp;
sbyte_xor(): XOR bytes array with a single byte  

* decrypt_xor:  
&nbsp;&nbsp;
decrypt_sbyte_xor(): decrypt a single-byte XOR cipher  
&nbsp;&nbsp;
calc_letter_hist(): calculate the normalized letter frequency histogram of bytes  
&nbsp;&nbsp;
cmp_letter_hist(): compare letter frequency histograms
