#!/usr/bin/micropython

file = open("app", "rb")
data = file.read()
file.close()

for b in data:
    print(hex(b))
