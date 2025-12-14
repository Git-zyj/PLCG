#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53244;
unsigned short var_2 = (unsigned short)5653;
unsigned char var_5 = (unsigned char)95;
unsigned int var_8 = 1445883179U;
int zero = 0;
signed char var_18 = (signed char)-98;
unsigned int var_19 = 1986920556U;
short var_20 = (short)19384;
int var_21 = 481909824;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 538983740810874110ULL;
short var_24 = (short)6525;
unsigned short var_25 = (unsigned short)18716;
_Bool arr_0 [15] ;
unsigned short arr_2 [15] ;
unsigned short arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)32342;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)39884;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)42277;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 85683034 : -2008001676;
}

void checksum() {
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
