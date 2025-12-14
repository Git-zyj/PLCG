#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2990302808347990783LL;
signed char var_1 = (signed char)65;
signed char var_2 = (signed char)-126;
long long int var_3 = -3160021811478391176LL;
long long int var_4 = 8915300702983447564LL;
signed char var_7 = (signed char)29;
unsigned long long int var_8 = 13095479371521897290ULL;
unsigned long long int var_9 = 3834335829589785842ULL;
long long int var_11 = -8223526065737533834LL;
int zero = 0;
unsigned long long int var_12 = 3173765207857958418ULL;
long long int var_13 = -9200910711595254327LL;
long long int var_14 = 51609795475123027LL;
long long int var_15 = 6241154936507038235LL;
long long int var_16 = -1041743080827367245LL;
long long int var_17 = 4518365710935903638LL;
long long int arr_6 [21] ;
unsigned long long int arr_15 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -3184453647975499865LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 6262743831528995178ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
