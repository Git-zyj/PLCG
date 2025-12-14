#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1833036318;
unsigned short var_3 = (unsigned short)27574;
unsigned long long int var_5 = 2026292393049138840ULL;
unsigned long long int var_6 = 12670253319719193123ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)84;
unsigned long long int var_14 = 16117111984760767714ULL;
int var_15 = 1385903793;
short arr_0 [22] [22] ;
long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)18359;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -7964605863380052105LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
