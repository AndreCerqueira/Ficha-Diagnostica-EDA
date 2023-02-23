#pragma once

/*****************************************************************//**
 * @file   Funcs.h
 * @brief Functions Header
 *
 * @author André Cerqueira
 * @date   February 2023
 *********************************************************************/

 // Includes
#include <stdio.h>


 // Constants
#define FILE_NAME "Distances.txt"


// Functions
float GetAverageDistance(float distances[], int size);
float GetMaxDistance(float distances[], int size);
float GetMinDistance(float distances[], int size);
void GetAllCalculations(float distances[], int size, float* average, float* max, float* min);
void GetDistancesInAscendingOrder(float distances[], int size);
void SaveDataToFile(float distances[], int size, float average, float max, float min);
void DemonstrateFunctions(float distances[], int size);
