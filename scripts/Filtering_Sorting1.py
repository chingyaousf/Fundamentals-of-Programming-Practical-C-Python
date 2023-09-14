total = count = 0.0
infile = open("input.dat","r")
for line in infile:
    try:
        number = int(line)
        if number == 0:
            continue
        total += number
        count += 1
    except ValueError:
        break
print("The average is: %f\n" % (total/count))
infile.close()