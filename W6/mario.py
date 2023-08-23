def main():
    h = get_height()
    for i in range(h):
        print("#")

def get_height():
    while True:
        try:
            n = int(input("Height= "))
            if n > 0: 
                return n
        except ValueError:               #for exepting the value error when user give char as input(n )
            print("Not an integer")
                
    
main()    


#for horizontal line of hash print("#",end = "")