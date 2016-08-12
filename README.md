#moduleFMU
This is a module to import and cosimulation of FMUs, developed using FMI standards, for MBDyn.

#Requirement
1. MBDyn simulation software. (can be downloaded from https://www.mbdyn.org/?Software\_Download)
2. This module is created by using FMILibrary. FMILibrary is a JModellica software  that enables integration of Functional Mock-up Units (FMUs) import in applications. It can be downloaded from http://www.jmodelica.org/FMILibrary
3. In Makefile.inc from modules/module-FMU/ in mbdyn-VERSION, 

	FMIL: Location where build directory of FMILibrary exists.

	FMII: Location where FMILibrary is installed. 

#Input Syntax 
user defined: \<label\>, FMU, “\<location to FMU\>”,
	type, \<cosimulation/import\>, tolerance, <tolerance value>,
	<fmu input variable>, node, <node label>, <node type>, <mbdyn equivalent>,
	<fmu input variable>, node, <node label>, <node type>, <mbdyn equivalent>,
	.....
	output, yes;

Example Usage:
user defined: 99, FMU, "/location/to/BouncingBall\_cs.fmu",
	type, cosimulation,
	"u", node, 1, structural, string, "X[3]", direct,
	"u2", node, 1, structural, string, "X[2]", direct,
	output, yes;

#Limitations


