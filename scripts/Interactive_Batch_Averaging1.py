total = count = 0
while(True):
    try:
        if count == 0:
            print("Enter a number:")
        else:
            print("Enter another number or any letter to finish:")
        number = int(input())
        total += number
        count += 1
    except ValueError:
        break
print("The average is: %f\n" % (total/count))