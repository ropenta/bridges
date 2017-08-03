# Find conserved residues among two homologous proteins

1. Follow VMD's tutorial for the MultiSeq extension: 

    http://www.ks.uiuc.edu/Training/Tutorials/vmd/tutorial-html/node6.html

    The important parts are:

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Loading aquaporin structures

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Aligning the moleucles

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Aligning molecules and coloring molecules by degree of conservation

2. Click the 'Edit' dropdown button, and select 'Remove Gaps'. Remove all of the gaps.

3. Click the 'File' dropdown button, and select Export. Export the Color Data as a text file.

4. Run this:
    $ python conserve.py
    Enter the name of the Color Data file

5. Check to make sure you have an output file called "res_conserved.txt"
