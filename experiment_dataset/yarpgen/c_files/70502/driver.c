#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53272;
unsigned long long int var_1 = 12969603661129831719ULL;
short var_3 = (short)13458;
short var_4 = (short)10544;
unsigned short var_7 = (unsigned short)22442;
int var_9 = 854417892;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 644721290U;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)41;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)191;
short var_16 = (short)30544;
short arr_5 [14] ;
unsigned char arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-23598;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)78;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
