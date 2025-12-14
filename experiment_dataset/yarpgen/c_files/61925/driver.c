#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)120;
unsigned char var_5 = (unsigned char)148;
int var_6 = -1465905389;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 12072378646649534453ULL;
int zero = 0;
unsigned int var_12 = 3345247750U;
short var_13 = (short)-24345;
unsigned int var_14 = 1683697475U;
_Bool arr_0 [17] ;
int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -1410973782;
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
