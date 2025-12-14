#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1045106041U;
unsigned short var_1 = (unsigned short)53522;
unsigned long long int var_5 = 18142101159205599761ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_17 = -7038761755140341220LL;
unsigned int var_18 = 3856973182U;
unsigned short var_19 = (unsigned short)37678;
unsigned short var_20 = (unsigned short)55826;
unsigned int var_21 = 2314471506U;
unsigned long long int var_22 = 239789772111856386ULL;
int var_23 = -32309411;
unsigned int var_24 = 1264937173U;
signed char var_25 = (signed char)66;
unsigned int arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2477094137U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
