#include <stdlib.h>

typedef struct {
} hash_entry_t;

typedef struct {
    unsigned long int size;
    hash_entry_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
    hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (table == NULL) {
        return NULL;
    }

    table->array = (hash_entry_t **)calloc(size, sizeof(hash_entry_t *));
    if (table->array == NULL) {
        free(table);
        return NULL;
    }

    table->size = size;

    return table;
}

