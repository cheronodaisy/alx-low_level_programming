#include <stdlib.h>
#include <string.h>

typedef struct {
    char *key;
    char *value;
} hash_table_element_t;

typedef struct {
    size_t size;
    hash_table_element_t *elements;
} hash_table_t;

size_t hash(const char *key, size_t size) {
    size_t hash_value = 0;
    for (const char *p = key; *p != '\0'; p++) {
        hash_value = 31 * hash_value + *p;
    }
    return hash_value % size;
}

char *hash_table_get(const hash_table_t *ht, const char *key) {
    size_t index = hash(key, ht->size);
    for (size_t i = 0; i < ht->size; i++) {
        hash_table_element_t *element = &ht->elements[(index + i) % ht->size];
        if (element->key == NULL) {
            return NULL;
        }
        if (strcmp(element->key, key) == 0) {
            return element->value;
        }
    }
    return NULL;
}

