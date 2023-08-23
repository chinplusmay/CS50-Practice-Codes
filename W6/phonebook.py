import csv
with open("phonebook.csv","a") as file:
    name = input("Name: ")
    number = int(input("Number: "))
    
    w = csv.writer(file)
    w.writerow([name,number])
    