#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -8093795801920457285LL;
unsigned char var_8 = (unsigned char)94;
unsigned char var_9 = (unsigned char)114;
short var_10 = (short)20205;
unsigned long long int var_12 = 7441394164825763157ULL;
short var_13 = (short)24998;
int zero = 0;
unsigned long long int var_14 = 8797877837602093640ULL;
short var_15 = (short)740;
unsigned int var_16 = 2062263405U;
unsigned int var_17 = 1222808830U;
int arr_1 [17] [17] ;
short arr_3 [17] [17] ;
short arr_4 [17] ;
unsigned int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 1481553473;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)8833;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)8861;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 1804004622U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
