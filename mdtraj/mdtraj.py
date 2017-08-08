import mdtraj as md
import matplotlib.pylab as plot
import sys

name = sys.argv[1]

traj = md.load_dcd(name, top='../step5_assembly.xplor_ext.psf')
rmsds = md.rmsd(traj, traj)

plot.plot(rmsds)
plot.show()
