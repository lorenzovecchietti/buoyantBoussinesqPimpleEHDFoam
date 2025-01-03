# buoyantBoussinesqPimpleEHDFoam

[![Author](https://img.shields.io/badge/Author-green.svg)](https://sites.google.com/view/zehtabiyan/home)
[![Paper](https://img.shields.io/badge/Paper-Access-red.svg)](https://doi.org/10.1016/j.elstat.2019.103415)

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0) 

An OpenFOAM solver to model enhancement of mixed convection heat transfer due to electrohydrodynamic (EHD) flow, developed by [Navid Zehtabiyan-Rezaie](https://sites.google.com/view/zehtabiyan/home).

# Description
The developed solver handles governing equations in mixed convection heat transfer including continuity, momentum, energy, and electrical equations. The developed solver is able to handle the coupled equations. For a comprehensive understanding of this solver, see this [publication](https://doi.org/10.1016/j.elstat.2019.103415).

# Target platform
The code has been rigorously tested and verified to be fully compatible with OpenFOAM v2406, ensuring its smooth integration and reliable performance with this specific release.

# How to compile and use the solver
1- Download the source code using the following command:

  `git clone https://github.com/nzhtbyn/buoyantBoussinesqPimpleEHDFoam.git`

2- To compile the solver, go to your work directory via the following command:
  
`cd $WM_PROJECT_USER_DIR`
       
Copy the folder to your work directory, and compile the new solver with the following command
  
 `wmake`
 
3- Copy the folder _validationCase_ to your run directory. To initiate the simulation, execute the following command:

`.//Allrun`

## Charge density boundary condition

One of the problems in solving the conservation of space charge density is the application of a boundary condition on the emitting electrode. Since all essential ionization processes next to the emitting electrode are neglected, strict boundary conditions for the charge density cannot be formulated. The problem can be solved by using the Kaptzov hypothesis. He suggested that if the corona discharge occurs at some point of the emitting electrode and charge is injected, the electric field at this point remains at the value it takes at the corona onset. According to the above-mentioned explanations, a common method is
used in numerical studies to properly estimate the charge density boundary condition on the emitting electrode. First, the charge density at the wire is guessed and iterated until the electric field is sufficiently close to Peek’s law, which specifies the onset electric field on the emitting electrode. Read more, [here](https://doi.org/10.1016/j.elstat.2019.103415).

# Validation
The local heat transfer coefficient over a plate with a heat flux of 187 $\text{W}/\text{m}^2$ is compared with the experimental results of [Owsenek and Seyed-Yagoobi](https://doi.org/10.1115/1.2824148). Three different voltages are applied to the wire placed at a distance of 2 cm above the heated plate. Results obtained from the developed solver show a very good agreement with the experimental data. 

  <img src="https://github.com/nzhtbyn/buoyantBoussinesqPimpleEHDFoam/blob/main/validationCase/ehdHeat_JoS_2020.jpg" width="400" height="400" alt="Local heat transfer coefficient with a single wire electrode placed 2 cm above the plate electrode for a heat flux of 187 W/m2; a comparison between experimental results of Owsenek and Seyed-Yagoobi [31] and results of the present solver.">

The performance of the solver has been further assessed through extensive testing against reference data in the study of [Zehtabiyan-Rezaie et al. (2020)](https://doi.org/10.1016/j.elstat.2019.103415).

# How to cite
Please, cite this library as:
```
@article{ZEHTABIYANREZAIE_ehdHeat_JoE_2020,
author = {Navid Zehtabiyan-Rezaie and Majid Saffar-Avval and Kazimierz Adamiak},
title = {Forced convection heat transfer enhancement using a coaxial wire-tube corona system},
journal = {Journal of Electrostatics},
volume = {103},
pages = {103415},
year = {2020},
issn = {0304-3886},
doi = {https://doi.org/10.1016/j.elstat.2019.103415}
}
```
