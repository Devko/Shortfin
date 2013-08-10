#ifndef _CACHE_H_
#define _CACHE_H_



struct cache_node {
    void *value;
    struct cache_node **nodes;
    int used;
};

typedef struct cache_node cnode;

typedef struct {
    struct cache_node **nodes;

    int size;
    int used;
    int max;
} cache;



int cache_init(cache*);
cnode *cache_add(cache*, char*, void*);
void* cache_get(cache*, char*, int);
void* cache_get_exists(cache*, char*, int);
int cache_exists(cache*, char*, int);
int cache_free(cache*);
int cache_free_nodes(cnode *n);

#endif
