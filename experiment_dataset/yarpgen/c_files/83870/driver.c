#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30;
unsigned char var_2 = (unsigned char)163;
int var_7 = -741659815;
unsigned short var_9 = (unsigned short)18861;
unsigned long long int var_10 = 2845145346431184841ULL;
int var_11 = -1651744665;
int var_12 = -1278897716;
short var_15 = (short)-25754;
unsigned long long int var_17 = 17603507470275305635ULL;
int zero = 0;
unsigned long long int var_19 = 8149319088057107478ULL;
int var_20 = -2102441501;
unsigned char var_21 = (unsigned char)191;
int var_22 = 323199357;
int var_23 = -2020982493;
unsigned short var_24 = (unsigned short)24908;
short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)14004;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
