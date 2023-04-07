#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 1000

typedef struct hash_node {
    char *key;
    char *value;
    struct hash_node *next;
} hash_node_t;

typedef struct hash_table {
    hash_node_t *table[TABLE_SIZE];
} hash_table_t;

hash_node_t *create_node(const char *key, const char *value) {
    hash_node_t *node = malloc(sizeof(hash_node_t));
    node->key = strdup(key);
    node->value = strdup(value);
    node->next = NULL;
    return node;
}

unsigned int hash(const char *key) {
    unsigned int hash = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        hash = 31 * hash + key[i];
    }
    return hash % TABLE_SIZE;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    if (ht == NULL || key == NULL || strcmp(key, "") == 0) {
        return 0;
    }
    unsigned int index = hash(key);
    hash_node_t *node = ht->table[index];
    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            free(node->value);
            node->value = strdup(value);
            return 1;
        }
        node = node->next;
    }
    hash_node_t *new_node = create_node(key, value);
    if (new_node == NULL) {
        return 0;
    }
    new_node->next = ht->table[index];
    ht->table[index] = new_node;
    return 1;
}

