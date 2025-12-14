#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2358;
unsigned char var_3 = (unsigned char)144;
int var_11 = -78313462;
unsigned int var_12 = 226353709U;
long long int var_14 = 5097732693130387347LL;
int zero = 0;
long long int var_18 = 795743599833828237LL;
long long int var_19 = 5549695970926533109LL;
unsigned short var_20 = (unsigned short)47672;
unsigned int var_21 = 36529043U;
unsigned short var_22 = (unsigned short)59421;
short arr_0 [11] [11] ;
int arr_5 [11] ;
unsigned short arr_7 [11] [11] [11] ;
short arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-26213;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -1493162503;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)47719;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (short)23074;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
