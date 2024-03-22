# ft_range


This repository offers a custom implementation of a utility function named `ft_range`, which generates an array of integers that range from a specified minimum value (`min`) to a maximum value (`max`), excluding the maximum itself. This function is particularly useful for generating sequences of numbers dynamically and showcases fundamental concepts in memory management and array manipulation in C.

## Function Description

`ft_range` allocates memory and populates an array with all the integers between `min` and `max` (including `min` but excluding `max`). This function demonstrates dynamic memory allocation, error handling, and working with pointers and arrays in C programming.

### Function Prototype

```c
int *ft_range(int min, int max);
