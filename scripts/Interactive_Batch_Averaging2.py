total = count = 0.0
infile = open("input.dat","r")
outfile = open("output1.dat","w")
for line in infile:
    try:
        number = int(line)
        total += number
        count += 1
        outfile.write("%d %f\n" % (count,total/count))
    except ValueError:
        break
print("The average is %f\n" % (total/count))
infile.close()
outfile.close()