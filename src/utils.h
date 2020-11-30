/*
 * timer.h
 *
 *  Created on: 30/11/2020
 *  Author: Nvixnu
 */

#ifndef UTILS_H_
#define UTILS_H_

#define STR_HELPER(x) #x

/**
 * Converts a number to string
 */
#define NUM2STR(x) STR_HELPER(x)

/**
 * Calculates the elapsed time from the struct timespec start and stop values
 */
#define HOST_DURATION_MS(start, stop) (stop.tv_sec - start.tv_sec) * 1e3 + (stop.tv_nsec - start.tv_nsec) / 1e6

#endif /* UTILS_H_ */
