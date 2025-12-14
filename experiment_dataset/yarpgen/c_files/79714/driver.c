#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29851;
int var_1 = -1870454922;
unsigned int var_2 = 566186952U;
short var_4 = (short)5679;
unsigned short var_6 = (unsigned short)387;
signed char var_7 = (signed char)-83;
signed char var_8 = (signed char)23;
long long int var_9 = -4716969274700377428LL;
int var_10 = 557720364;
int zero = 0;
unsigned int var_11 = 2524513621U;
int var_12 = 1376960880;
unsigned long long int var_13 = 11653951063170230132ULL;
short var_14 = (short)1752;
signed char var_15 = (signed char)118;
short var_16 = (short)-21630;
int var_17 = -1891299545;
unsigned long long int var_18 = 7856223777931950965ULL;
short arr_0 [21] ;
unsigned int arr_3 [21] ;
unsigned int arr_4 [21] [21] [21] ;
long long int arr_5 [21] [21] ;
unsigned long long int arr_6 [21] ;
long long int arr_7 [21] [21] [21] ;
short arr_9 [21] [21] [21] [21] ;
unsigned long long int arr_10 [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)8172;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 3884967913U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 315112845U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 462651918240451986LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 3317862157585461949ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 8215472369421211501LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-23701;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 17169077811862476001ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
