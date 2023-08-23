import sys
if len(sys.argv) != 2:
    print("Missing Cl command")
    sys.exit(0)
  
print("Hello,",sys.argv[1])
sys.exit(1)