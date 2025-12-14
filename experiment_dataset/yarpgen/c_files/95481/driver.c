#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1895526299;
int var_1 = 1521214676;
unsigned char var_6 = (unsigned char)92;
unsigned long long int var_7 = 3976110249027487879ULL;
unsigned char var_11 = (unsigned char)151;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -1021714793;
unsigned char var_15 = (unsigned char)160;
long long int arr_0 [21] ;
short arr_2 [21] ;
int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 72185032837448112LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)28291;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 941897772;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
