#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1208061050;
unsigned int var_3 = 71548121U;
_Bool var_4 = (_Bool)0;
unsigned char var_9 = (unsigned char)122;
int zero = 0;
long long int var_10 = -1719957006236787587LL;
signed char var_11 = (signed char)-4;
unsigned int var_12 = 2920170659U;
unsigned short var_13 = (unsigned short)48107;
unsigned long long int arr_0 [18] ;
_Bool arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 6752637031575865324ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
