import sys

names = ["Bob","KircHoff","DolS","Emilia","ReM"]

name = input("name to Search in list: ")

for i in names:
    p = i.lower()
    if p == name.lower():
        print("found\n")
        sys.exit(1)
    
    else:
        print("NOT Found\n")    