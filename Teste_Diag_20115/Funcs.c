
/*****************************************************************//**
 * @file   Funcs.h
 * @brief Functions
 *
 * @author André Cerqueira
 * @date   February 2023
 *********************************************************************/

// Includes
#include "Funcs.h"
#include <stdio.h>


 /**
  * @brief Returns the average distance
  *
  * @param distances[] Array of distances
  * @param size Size of the array
  * @return 
  * @author André Cerqueira
  *
  */
float GetAverageDistance(float distances[], int size) {
	float sum = 0.0f;
	
	for (int i = 0; i < size; i++)
		sum += distances[i];
	
	return sum / size;
}


 /**
  * @brief Returns the distance of the object that is the furthest away
  *
  * @param distances[] Array of distances
  * @param size Size of the array
  * @return
  * @author André Cerqueira
  *
  */
float GetMaxDistance(float distances[], int size) {
	float max = distances[0];

	for (int i = 1; i < size; i++) {
		if (distances[i] > max)
			max = distances[i];
	}

	return max;
}


/**
  * @brief Returns the distance of the object that is the closest
  *
  * @param distances[] Array of distances
  * @param size Size of the array
  * @return
  * @author André Cerqueira
  *
  */
float GetMinDistance(float distances[], int size) {
	float min = distances[0];

	for (int i = 1; i < size; i++) {
		if (distances[i] < min)
			min = distances[i];
	}

	return min;
}


/**
  * @brief Returns all the calculations
  *
  * @param distances[] Array of distances
  * @param size Size of the array
  * @param average Average distance
  * @param max Max distance
  * @param min Min distance
  * @return
  * @author André Cerqueira
  *
  */
void GetAllCalculations(float distances[], int size, float* average, float* max, float* min) {
	*average = GetAverageDistance(distances, size);
	*max = GetMaxDistance(distances, size);
	*min = GetMinDistance(distances, size);
}


/**
  * @brief Returns all the distances in ascending order
  *
  * @param distances[] Array of distances
  * @param size Size of the array
  * @return
  * @author André Cerqueira
  *
  */
void GetDistancesInAscendingOrder(float distances[], int size) {
	float temp;

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (distances[i] > distances[j]) {
				temp = distances[i];
				distances[i] = distances[j];
				distances[j] = temp;
			}
		}
	}
}


/**
  * @brief Saves all the data in a file
  *
  * @param distances[] Array of distances
  * @param size Size of the array
  * @param average Average distance
  * @param max Max distance
  * @param min Min distance
  * @return
  * @author André Cerqueira
  *
  */
void SaveDataToFile(float distances[], int size, float average, float max, float min) {
	FILE* file;
	fopen_s(&file, FILE_NAME, "w");

	if (file == NULL)
		return;
	
	fprintf(file, "Average distance: %f\n", average);
	fprintf(file, "Max distance: %f\n", max);
	fprintf(file, "Min distance: %f\n", min);

	for (int i = 0; i < size; i++)
		fprintf(file, "%f\n", distances[i]);

	fclose(file);
}


/**
  * @brief Demonstrates the use of the functions developed in the previous exercises
  *
  * @param distances[] Array of distances
  * @param size Size of the array
  * @return
  * @author André Cerqueira
  *
  */
void DemonstrateFunctions(float distances[], int size) {
	float average, max, min;
	
	GetAllCalculations(distances, size, &average, &max, &min);
	GetDistancesInAscendingOrder(distances, 8);
	SaveDataToFile(distances, size, average, max, min);
}

