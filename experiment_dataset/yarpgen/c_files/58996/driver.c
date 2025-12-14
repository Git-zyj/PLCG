#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2708237557U;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)18;
unsigned int var_8 = 1793592004U;
unsigned short var_9 = (unsigned short)15879;
unsigned long long int var_10 = 5510024112806279803ULL;
int zero = 0;
unsigned int var_14 = 1293281573U;
unsigned char var_15 = (unsigned char)23;
_Bool var_16 = (_Bool)0;
unsigned char arr_0 [10] ;
_Bool arr_5 [10] ;
short arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (short)22465;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
