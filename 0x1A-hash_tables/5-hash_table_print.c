#include <stdio.h>
#include "hash_table.h"

void hash_table_print(const hash_table_t *ht) {
    if (ht == NULL) {
        return;
    }

    printf("{\n");
    for (int i = 0; i < ht->size; i++) {
        printf("  [%d]: ", i);
        node_t *node = ht->array[i];
        while (node != NULL) {
            printf("(%s, %s) ", node->key, node->value);
            node = node->next;
        }
        printf("\n");
    }
    printf("}\n");
}

