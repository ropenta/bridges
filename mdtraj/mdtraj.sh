#!/usr/bin/env bash
# This program runs mdtraj on a .dcd file, with step5_assembly.xplor_ext.psf as the topology file.

#file_name=$(ls -t | head -1 | cut -f 1 -d '.')

python mdtraj.py $1