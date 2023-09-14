infile = open("test.dat","r")
outfile = open("output2.dat", "w")
numbers = []

for line in infile:
    try:
        number = int(line)
        if number < 0:
            continue
        numbers.append(number)
    except ValueError:
        break
numbers.sort(reverse=True)
for number in numbers:
    outfile.write (str(number) + "\n")
infile.close()
outfile.close()