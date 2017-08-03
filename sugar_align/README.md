# How to Align Glucose/Xylose near a Protein
1. File organization:

  \sugar_align
      
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;glucose.pdb
      
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;glucose.psf
      
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;my_protein.pdb
      
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;my_protein.psf
      
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\tcl_and_sh_files
      
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;sugar_setup.sh
            
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;merge_align.tcl

2. For now, you will need to modify lines 42,43,47,48 of sugar_setup.sh and lines 31,32,35,36 of merge_align.tcl to include the correct directory of the files (.tcl, .psf, .pdb)

3. $  cd ~/path_to_program/sugar_align/tcl_and_sh_files/

   $  bash sugar_setup.sh ../<my_protein.pdb> ../<my_protein.psf
   
   Replace <my_protein.pdb> and <my_protein.psf> with the relevant protein files, without the brackets.

3. "Enter sugar (glucose or xylose): "

    Enter your sugar here, and program should run to completion. The output will be one .pdb and one .psf with a sugar aligned     nearby your protein.
  