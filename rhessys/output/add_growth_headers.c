/*--------------------------------------------------------------*/
/* 																*/
/*					add_growth_headers					*/
/*																*/
/*	add_growth_headers - 
/*																*/
/*	NAME														*/
/*	add_growth_headers 
/*																*/
/*	SYNOPSIS													*/
/*	void add_growth_headers(struct world output_file_object *,				*/
/*			struct command_line_object *)					*/
/*																*/
/*	OPTIONS														*/
/*																*/
/*	DESCRIPTION													*/
/*																*/
/*	Adds headers for yearly, monthly, daily and	*/
/*	hourly basin output 					*/
/*																*/
/*	PROGRAMMER NOTES											*/
/*																*/
/*																*/
/*--------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include "rhessys.h"


void add_growth_headers(struct world_output_file_object *world_output_files, 
			struct command_line_object *command_line)
{
	/*--------------------------------------------------------------*/
	/*	Local function definition.									*/
	/*--------------------------------------------------------------*/
	/*--------------------------------------------------------------*/
	/*	Local variable definition.									*/
	/*--------------------------------------------------------------*/
	FILE *outfile;
	int check;
	/*--------------------------------------------------------------*/
	/*	Basin file headers					*/
	/*--------------------------------------------------------------*/

	if (command_line[0].b != NULL) {
	/*--------------------------------------------------------------*/
	/*	Daily 							*/
	/*--------------------------------------------------------------*/
	outfile = world_output_files[0].basin[0].daily;
	fprintf(outfile,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s \n" ,
		"day",
		"month",
		"year",
		"basinID",
		"lai",
		"gpsn",
		"plant_resp",
		"soil_resp",
		"nitrate",
		"sminn",
		"surfaceN",
		"plantc",
		"plantn",
		"npool",
		"litrc",
		"litrn",
		"soilc",
		"soiln",
		"streamflow_NO3",
		"denitrif",
		"nitrif",
		"DOC",
		"DON","root_depth");
	/*--------------------------------------------------------------*/
	/*	Yearly 							*/
	/*--------------------------------------------------------------*/
	outfile = world_output_files[0].basin[0].yearly;
	fprintf(outfile, "%s %s %s %s %s %s %s %s %s %s \n",
		"year",
		"basinID",
		"gpsn",
		"plantresp",
		"newC",
		"soilhr",
		"strN",
		"denitrif","root_depth","mortf");
		
	}

	/*--------------------------------------------------------------*/
	/*	Hillslope file headers					*/
	/*--------------------------------------------------------------*/
	if (command_line[0].h != NULL) {
	/*--------------------------------------------------------------*/
	/*	Daily 							*/
	/*--------------------------------------------------------------*/
	outfile = world_output_files[0].hillslope[0].daily;
	fprintf(outfile,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n" ,
		"day",
		"month",
		"year",
		"basinID",
		"hillID",
		"gpsn",
		"resp",
		"nitrate",
		"sminn",
		"plantc",
		"plantn",
		"litrc",
		"litrn",
		"soilc",
		"soiln",
		"streamflow_NO3",
		"streamflow",
		"denitrif",
		"nitrif",
		"DOC",
		"DON");
	}

	/*--------------------------------------------------------------*/
	/*	Zone file headers					*/
	/*--------------------------------------------------------------*/
	if (command_line[0].z != NULL) {
	/*--------------------------------------------------------------*/
	/*	Daily 							*/
	/*--------------------------------------------------------------*/
	outfile = world_output_files[0].zone[0].daily;
	fprintf(outfile,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n ", 
		"day",
		"month",
		"year",
		"basinID",
		"hillID",
		"ID",
		"rain",
		"snow",
		"tday",
		"tavg",
		"vpd",
		"Kdown_direct",
		"Kdown_diffuse",
		"PAR_direct",
		"PAR_diffuse");
	}

	/*--------------------------------------------------------------*/
	/*	Patch file headers					*/
	/*--------------------------------------------------------------*/
	if (command_line[0].p != NULL) {
	/*--------------------------------------------------------------*/
	/*	Daily 							*/
	/*--------------------------------------------------------------*/
	outfile = world_output_files[0].patch[0].daily;
	check = fprintf(outfile,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n",
		"day",
		"month",
		"year",
		"basinID",
		"hillID",
		"zoneID",
		"patchID",
		"lai",
		"plantc",
		"net_psn",
		"plant_resp",
		"soil_resp",
		"litr1c",
		"litr2c",
		"litr3c",
		"litr4c",
		"lit.rain_cap",
		"soil1c",
		"soil2c",
		"soil3c",
		"soil4c",
		"denitrif",
		"netleach",
		"soilNO3",
		"soilNH4",
		"streamNO3",
		"surfaceNO3",
		"surfaceNH4",
		"height",
		"N-uptake",
		"root_depth",
		"area");
	/*--------------------------------------------------------------*/
	/*	Yearly 							*/
	/*--------------------------------------------------------------*/
	outfile = world_output_files[0].patch[0].yearly;
	fprintf(outfile, "%s %s %s %s %s %s %s %s %s %s %s %s\n",
		"year",
		"basinID",
		"hillID",
		"zoneID",
		"patchID",
		"litter_c",
		"soil_c",
		"litter_n",
		"soil_n",
		"nitrate",
		"sminn","root_depth");
	}

	/*--------------------------------------------------------------*/
	/*	Stratum file headers					*/
	/*--------------------------------------------------------------*/
	if (command_line[0].c != NULL) {
	/*--------------------------------------------------------------*/
	/*	Daily 							*/
	/*--------------------------------------------------------------*/
	outfile = world_output_files[0].canopy_stratum[0].daily;
	fprintf(outfile,
		"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n" ,
		"day",
		"month",
		"year",
		"basinID",
		"hillID",
		"zoneID",
		"patchID",
		"stratumID",
		"proj_lai",
		"leafc",
		"leafn",
		"cpool",
		"npool",
		"dead_leafc",
		"frootc",
		"frootn",
		"live_stemc",
		"live_stemn",
		"leafc_store",
		"leafn_store",
		"dead_stemc",
		"dead_stemn",
		"live_crootc",
		"live_crootn",
		"dead_crootc",
		"dead_crootn",
		"cwdc",
		"mresp",
		"gresp",
		"psn_to_cpool","age","root_depth","gwseasonday","lfseasonday","gsi", "nlimit",
		"fleaf","froot","fwood","Nuptake","smin2pl","retrans2pl","mort_fract");

	/*--------------------------------------------------------------*/
	/*	Yearly 							*/
	/*--------------------------------------------------------------*/
	outfile = world_output_files[0].canopy_stratum[0].yearly;
	fprintf(outfile, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n",
		"year",
		"basinID",
		"hillID",
		"zoneID",
		"patchID",
		"stratumID",
		"proj_lai",
		"leafc",
		"leafn",
		"frootc",
		"frootn",
		"stemc",
		"stemn",
		"cwdc",
		"cwdn",
		"psn","cpool", "mortfract");
	}


	return;
} /*end add_growth_headers*/
