# How to get RMSD Plot for a transporter protein across time
1. File organization:

    \mdtraj
      
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;topologyfile.psf
      
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\py_and_sh_files
      
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;file1.dcd

	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;file2.dcd

	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;mdtraj_run.sh
            
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;mdtraj_run.tcl

2. Run mdtraj_run.sh and pass the .dcd as the arg (step5 assembly is in the above folder)

3. Check the plot for irregularities
