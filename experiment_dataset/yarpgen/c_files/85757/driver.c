#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)43861;
unsigned char var_9 = (unsigned char)240;
signed char var_11 = (signed char)45;
int var_13 = -575624164;
short var_14 = (short)1467;
unsigned char var_15 = (unsigned char)15;
int zero = 0;
long long int var_17 = -1366034379353677336LL;
unsigned short var_18 = (unsigned short)30001;
unsigned short var_19 = (unsigned short)3282;
unsigned short var_20 = (unsigned short)40013;
int var_21 = 1162939621;
unsigned short var_22 = (unsigned short)44241;
unsigned int var_23 = 414958493U;
unsigned short var_24 = (unsigned short)14241;
unsigned char var_25 = (unsigned char)179;
int var_26 = -1116600101;
int var_27 = 1555255522;
long long int var_28 = -5153338675422547762LL;
unsigned long long int arr_0 [21] [21] ;
unsigned char arr_5 [17] [17] [17] ;
short arr_8 [24] ;
unsigned short arr_9 [24] ;
unsigned int arr_11 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 10484464911669061617ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (short)-7088;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)35645;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 917565252U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
