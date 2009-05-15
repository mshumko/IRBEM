/*
%***************************************************************************************************
% Copyright 2006, T.P. O'Brien
%
% This file is part of IRBEM-LIB.
%
%    IRBEM-LIB is free software: you can redistribute it and/or modify
%    it under the terms of the GNU Lesser General Public License as published by
%    the Free Software Foundation, either version 3 of the License, or
%    (at your option) any later version.
%
%    IRBEM-LIB is distributed in the hope that it will be useful,
%    but WITHOUT ANY WARRANTY; without even the implied warranty of
%    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
%    GNU Lesser General Public License for more details.
%
%    You should have received a copy of the GNU Lesser General Public License
%    along with IRBEM-LIB.  If not, see <http://www.gnu.org/licenses/>.
%
prototype C header file for access to generic .dll or .so file
e.g., onera_desp_lib.dll
Paul O'Brien paul.obrien@aero.org
 */


void make_lstar1_(int *ntime, int *kext,
		  int *options,int *sysaxes,
		  int *iyear,int *idoy,
		  double *UT,double *x1,
		  double *x2,double *x3,
		  double *maginput, double *Lm,
		  double *Lstar, double *Blocal,
		  double *Bmin, double *J,
		  double *MLT);

void make_lstar_shell_splitting1_(int *ntime, 
				  int *Nipa,
				  int *kext,
				  int *options,
				  int *sysaxes,
				  int *iyear,
				  int *idoy,
				  double *UT,
				  double *x1,
				  double *x2,
				  double *x3,
				  double *alpha,
				  double *maginput, 
				  double *Lm,
				  double *Lstar, 
				  double *Blocal,
				  double *Bmin, 
				  double *J,
				  double *MLT);

void drift_shell1_(int *kext, int *options,
		   int *sysaxes, int *iyear,
		   int *idoy, double * UT,
		   double *x1, double *x2, double *x3,
		   double *maginput,
		   double *Lm,
		   double *Lstar, 
		   double *Blocal,
		   double *Bmin, 
		   double *J,
		   double *posit,
		   int *ind);

void drift_bounce_orbit1_(int *kext, int *options,
			  int *sysaxes, int *iyear,
			  int *idoy, double * UT,
			  double *x1, double *x2, double *x3, double *alpha,
			  double *maginput,
			  double *Lm,
			  double *Lstar, 
			  double *Blocal,
			  double *Bmin, 
			  double *Bmir, 
			  double *J,
			  double *posit,
			  int *ind);

void trace_field_line1_(int *kext, int *options,
		   int *sysaxes, int *iyear,
		   int *idoy, double * UT,
		   double *x1, double *x2, double *x3,
		   double *maginput,
		   double *Lm,
		   double *Blocal,
		   double *Bmin, 
		   double *J,
		   double *posit,
		   int *ind);

void get_field1_(int *kext, int *options,
		 int *sysaxes,
		 int *iyear,int *idoy,
		 double *UT,double *x1,
		 double *x2,double *x3,
		 double *maginput,
		 double *Bgeo,
		 double *B);

void find_mirror_point1_(int *kext, 
			 int *options,
			 int *sysaxes,
			 int *iyear,int *idoy,
			 double *UT,double *x1,
			 double *x2,double *x3,
			 double *alpha,
			 double *maginput,
			 double *Blocal,
			 double *Bmirror,
			 double *xGEO);

void find_foot_point1_(int *kext, 
		       int *options,
		       int *sysaxes,
		       int *iyear,int *idoy,
		       double *UT,double *x1,
		       double *x2,double *x3,
		       double *stop_alt,
		       int *hemi_flag,
		       double *maginput,
		       double *xfoot,
		       double *Bfoot,
		       double *Bfootmag);

void get_hemi1_(int *kext, 
		int *options,
		int *sysaxes,
		int *iyear,int *idoy,
		double *UT,double *x1,
		double *x2,double *x3,
		double *maginput,
		int *xHEMI);

void find_magequator1_(int *kext, 
			 int *options,
			 int *sysaxes,
			 int *iyear,int *idoy,
			 double *UT,double *x1,
			 double *x2,double *x3,
			 double *maginput,
			 double *Bmin,
			 double *xGEO);

void get_mlt1_(int *iyr, int *idoy,
	       double *UT, double *xGEO, double *MLT);

void fly_in_nasa_aeap1_(int *ntime, int *sysaxes,
			int *whichm, int *whatf,
			int *Nene, double *energy, 
			int *iyear, int *idoy, double *UT,
			double *x1,double *x2, double *x3,
			double *flux);

void get_ae8_ap8_flux_(int *ntime, int *whichm, int *whatf,
		       int *Nene, double *energy, 
		       double *BBo, double *L, double *flux);

void fly_in_afrl_crres1_(int *ntime, int *sysaxes,
			 int *whichm, int *whatf,
			 int *nene, double *energy, 
			 int *iyear, int *idoy, double *UT,
			 double *x1, double *x2, double *x3,
			 double *Ap15,
			 double *flux,
			 char *ascii_path,
			 int *strlen);

void get_crres_flux_(int *ntime, int *whichm, int *whatf,
		     int *nene, double *energy, 
		     double *BBo,double *L, double *Ap15,
		     double *flux,
		     char *ascii_path,
		     int *strlen);

void sgp4_tle1_(int *runtype,double *startsfe,double *stopsfe,double *deltasec,
		char *InFileByte,int *strlenIn,
		char *OutFileByte,int *strlenOut);

void sgp4_ele1_(int *sysaxes,
		int *Yr,int *Mon,int *Day,int *Hr,int *Minute,double *Sec,
		double *e1, double *e2,	double *e3, double *e4,	double *e5, double *e6,
		int *ele_opts,
		double *startsfe,double *stopsfe,double *deltasec,
		int *outYr,int *outDoy, double *outSec,
		double *x1, double *x2,	double *x3);

void coord_trans_vec1_(int *ntime, int *sysaxesIN,int *sysaxesOUT,
		   int *iyr,int *idoy,double *secs,
		   double *xINV,double *xOUTV);

void rv2coe_(double *R, double *V, 
	     double *P, double *A, double *Ecc, double *Incl, double *Omega, 
	     double *Argp, double *Nu, double *M, double *ArgLat,
	     double *TrueLon, double *LonPer);

void fly_in_ige1_(int *launch_year, int *duration,
		  int *whichm, int *whatf,
		  int *nene, double *energy,
		  double *Lower_flux, double *Mean_flux, double *Upper_flux);

void fly_in_meo_gnss1_(int *launch_year, int *duration,
		  int *whichm, int *whatf,
		  int *nene, double *energy,
		  double *Lower_flux, double *Mean_flux, double *Upper_flux);

void nrlmsise00_(int *ntime,int *whichAp,
		int *DOY,double *UT,double *ALT,double *LAT,double *LON,
		double *F107A,double *F107,double *AP,double *Dens,double *Temp);

void msise90_(int *ntime,int *whichAp,
		int *DOY,double *UT,double *ALT,double *LAT,double *LON,
		double *F107A,double *F107,double *AP,double *Dens,double *Temp);

void msis86_(int *ntime,int *whichAp,
		int *DOY,double *UT,double *ALT,double *LAT,double *LON,
		double *F107A,double *F107,double *AP,double *Dens,double *Temp);
