# Created by Rohith Pentaparthy on 8/3/17.
# Copyright © 2017 Rohith. All rights reserved.
# This program reads in 1 file that contains color data for multiple proteins, 
# and outputs a file that contains only conserved residues

# 1. Read input
filename = input('Enter the file name with its extension: ')
start_res1 = input('Enter the 1st protein\'s starting residue: ')
start_res2 = input('Enter the 2nd protein\'s starting residue: ')
f = open(filename, 'r')


# 2. Split input into 2 strings, remove '\n' and first word
two_list = []
for word in f.readlines():
    two_list.append(word)
a = two_list[0]
a = a[1:len(a)-1]
a = a.split(' ', 1)[1]
b = two_list[1]
b = b[1:len(b)-1]
b = b.split(' ', 1)[1]


# 3. Get the conserved residues for both proteins
protein1 = []
res_num = int(start_res1)
for i in a.split():
    if (i == '1.0'):
        protein1.append(res_num)
    res_num = res_num + 1
    
protein2 = []
res_num = int(start_res2)
for i in b.split():
    if (i == '1.0'):
        protein2.append(res_num)
    res_num = res_num + 1


# 4. Print out the conserved residue pairs in to a new file
outfile = open('res_conserved.txt', 'w')
outfile.write('hxt36  xyle\n')
for i in range(0, len(protein1)):
    res_pair =  str(str(protein1[i]) + "   " + str(protein2[i]))
    outfile.write(res_pair)
    outfile.write('\n')
num_pairs = str('Number of conserved residue pairs: ' + str(len(protein1)))
outfile.write(num_pairs)


# 5. Close everything
outfile.close()
f.close()