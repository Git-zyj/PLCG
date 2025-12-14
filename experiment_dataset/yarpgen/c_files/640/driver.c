#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)48;
unsigned char var_4 = (unsigned char)87;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)72;
unsigned long long int var_9 = 8350915350435913083ULL;
long long int var_10 = -775013720292178204LL;
unsigned long long int var_11 = 17574997419800442026ULL;
int var_13 = 1369181639;
int zero = 0;
unsigned long long int var_15 = 8248032908763230983ULL;
long long int var_16 = 1178406511497744725LL;
unsigned long long int var_17 = 7448603960407473611ULL;
_Bool var_18 = (_Bool)0;
unsigned char arr_4 [13] [13] [13] ;
_Bool arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)30 : (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
