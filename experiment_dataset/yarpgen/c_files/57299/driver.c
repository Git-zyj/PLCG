#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23856;
unsigned long long int var_1 = 13212378632463266540ULL;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-29827;
long long int var_7 = 5382902978000064988LL;
unsigned int var_11 = 2993408410U;
int zero = 0;
unsigned short var_13 = (unsigned short)52355;
long long int var_14 = 5621909100490560148LL;
long long int var_15 = 3579743328539315079LL;
unsigned long long int var_16 = 7354751325483625279ULL;
unsigned short arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)32923;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 17378735343756387652ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28952 : (unsigned short)61548;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
