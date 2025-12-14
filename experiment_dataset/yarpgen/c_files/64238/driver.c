#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3416765980U;
_Bool var_7 = (_Bool)1;
long long int var_14 = -2479287109926243861LL;
int zero = 0;
short var_19 = (short)-22287;
unsigned char var_20 = (unsigned char)14;
unsigned char var_21 = (unsigned char)80;
unsigned short arr_8 [10] ;
short arr_9 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)35175;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-23086;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
