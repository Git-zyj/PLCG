#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16231;
unsigned short var_2 = (unsigned short)43123;
_Bool var_6 = (_Bool)0;
short var_7 = (short)25409;
int zero = 0;
unsigned long long int var_20 = 3550385862468989756ULL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-12942;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)109;
unsigned int arr_0 [23] ;
unsigned int arr_2 [23] ;
short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 735531965U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1604250548U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-6565;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
