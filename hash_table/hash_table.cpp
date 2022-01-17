#include <stdio.h>
#include <string>
 
using namespace std;

#define CAPACITY 50000
typedef struct Ht_item Ht_item;
typedef struct HashTable HashTable;

unsigned long has_function(char* str){
    unsigned long i = 0;
    for(int j=0; str[j]; j++)
    i += str[j];
    return i % CAPACITY;
}

struct Ht_item{
    char* key;
    char* value;
}

struct HashTable{
    Ht_item ** items;
    int size;
    int count;
}

Ht_item* create_item(char* key, char* value){
    Ht_item* item = (Ht_item*) malloc(sizeof(Ht_item));
    item->key = (char*) malloc(strlen(key)+1);
    item->value = (char*) malloc(strlen(value)+1);

    strcpy(item->key, key);
    strcpy(item->value, value);

    return item;
}

HashTable 

