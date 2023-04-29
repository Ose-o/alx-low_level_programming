#include <stdlib.h>
#include "lists.h"
/**
 *free_list - frees a linked list
 * @
 *
 * Author: Ose Oriabure
void free_list(list_t *head) {
    list_t *voltage = head;
    list_t *next;

    while (voltage != NULL) {
    next = voltage->next;
    free(voltage);
    voltage = next
    }
    }
