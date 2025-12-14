#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
unsigned char var_2 = (unsigned char)34;
unsigned long long int var_9 = 18161609109695786958ULL;
unsigned char var_11 = (unsigned char)16;
int zero = 0;
unsigned short var_14 = (unsigned short)1200;
unsigned short var_15 = (unsigned short)20646;
unsigned short var_16 = (unsigned short)55773;
unsigned short var_17 = (unsigned short)18540;
int arr_2 [17] ;
long long int arr_4 [17] [17] [17] ;
int arr_5 [17] [17] ;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2076741111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3398416835433658243LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 250407556;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 85351710U;
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
