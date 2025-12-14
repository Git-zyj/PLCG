#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9108055386862864989LL;
long long int var_5 = 4824394500921931042LL;
long long int var_6 = 9017250544279368638LL;
long long int var_7 = 8753382008449553872LL;
int zero = 0;
long long int var_12 = 9045435780075626741LL;
long long int var_13 = -5644119841479340510LL;
long long int var_14 = 5479888560009299516LL;
long long int arr_0 [10] ;
long long int arr_2 [10] ;
long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3658797702008528508LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -975857362528998966LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1885139018544744997LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
