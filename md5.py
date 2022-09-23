# python 3 code to demonstrate the
# working of MD5(byte.byte)
import hashlib
# encoding Geeks for GEEKS using for md5 hash
#function
result=hashlib.md5(b'geeks for Geeks')
# printing the equivalent byte
print("The equaivale byte of hash is :",end="")
print(result.digest())
