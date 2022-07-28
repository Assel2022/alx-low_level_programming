#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "y", "0");
    hash_table_print(ht);
    hash_table_set(ht, "j", "1");
    hash_table_print(ht);
    hash_table_set(ht, "c", "2");
    hash_table_print(ht);
    hash_table_set(ht, "b", "3");
    hash_table_print(ht);
    hash_table_set(ht, "z", "4");
    hash_table_print(ht);
    hash_table_set(ht, "n", "5");
    hash_table_print(ht);
    hash_table_set(ht, "a", "6");
    hash_table_print(ht);
    hash_table_set(ht, "m", "7");
    hash_table_print(ht);
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
/*
 * {'y': '0'}
 * {'j': '1', 'y': '0'}
 * {'c': '2', 'j': '1', 'y': '0'}
 * {'b': '3', 'c': '2', 'j': '1', 'y': '0'}
 * {'b': '3', 'c': '2', 'j': '1', 'y': '0', 'z': '4'}
 * {'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
 * {'a': '6', 'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
 * }
*/
