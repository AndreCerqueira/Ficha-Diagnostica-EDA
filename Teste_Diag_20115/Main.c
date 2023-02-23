/*****************************************************************//**
 * @file   Main.c
 * @brief  Main
 *
 * @author André Cerqueira
 * @date   February 2023
 *********************************************************************/

 // Includes
#include "Funcs.h"


// Constants
#define N 8


int main()
{
	float distances[N] = { 10.2f, 13.3f, 7.0f, 45.7f, 23.7f, 12.1f, 16.0f, 19.0f };
	
	// Demonstrate the functions
	DemonstrateFunctions(distances, N);
}
