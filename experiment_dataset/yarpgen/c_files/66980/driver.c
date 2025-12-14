#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
long long int var_4 = 3996107356686836002LL;
unsigned char var_5 = (unsigned char)44;
long long int var_6 = -1501890898440376227LL;
unsigned int var_7 = 2369614473U;
int var_9 = 2369004;
int var_10 = 2032690233;
int var_11 = 1563056067;
int zero = 0;
unsigned char var_12 = (unsigned char)12;
signed char var_13 = (signed char)(-127 - 1);
short var_14 = (short)-15964;
unsigned char var_15 = (unsigned char)213;
_Bool var_16 = (_Bool)1;
unsigned char arr_3 [19] [19] ;
signed char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)100;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
