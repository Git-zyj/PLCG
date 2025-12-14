#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3766269822266834881LL;
long long int var_1 = -7674413189314519524LL;
unsigned char var_3 = (unsigned char)242;
unsigned int var_5 = 58725223U;
unsigned long long int var_6 = 14438595745829804541ULL;
unsigned int var_8 = 2821088292U;
unsigned char var_10 = (unsigned char)38;
signed char var_13 = (signed char)112;
unsigned char var_15 = (unsigned char)247;
short var_18 = (short)-23026;
int zero = 0;
int var_19 = 1825417355;
unsigned char var_20 = (unsigned char)22;
unsigned long long int var_21 = 15324641054679445940ULL;
long long int arr_3 [24] ;
unsigned long long int arr_6 [24] [24] [24] [24] ;
short arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 8561954249206212088LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2302504377113322866ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (short)-21877;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
