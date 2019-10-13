fhand=open(r'C:\Users\17791\Desktop\testtext','r')
inp=fhand.read()
for line in fhand :
    line=line.rstrip()
    print(line)
