#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 935764059U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 9435406093618492822ULL;
unsigned long long int var_5 = 363433865520773384ULL;
int var_6 = 1243403159;
signed char var_7 = (signed char)12;
unsigned int var_8 = 3388377634U;
signed char var_9 = (signed char)-16;
unsigned long long int var_12 = 12866751419272466ULL;
unsigned int var_14 = 2051247764U;
int var_16 = 2069251997;
int var_19 = -115807459;
int zero = 0;
unsigned int var_20 = 4231135998U;
unsigned int var_21 = 2295120217U;
int var_22 = 844373761;
unsigned long long int var_23 = 18374310546014532651ULL;
signed char var_24 = (signed char)55;
int var_25 = -1542367011;
int arr_0 [21] ;
signed char arr_2 [21] [21] ;
int arr_3 [21] [21] [21] ;
unsigned long long int arr_7 [21] [21] [21] [21] ;
signed char arr_8 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -711391393;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -872192082 : 1253199898;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 7026548967615595359ULL : 5069655172456647298ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-16 : (signed char)-91;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
