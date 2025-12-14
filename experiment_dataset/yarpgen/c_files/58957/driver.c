#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3987271411U;
unsigned char var_3 = (unsigned char)40;
long long int var_4 = 5818094329379807230LL;
long long int var_6 = -8239956939333249749LL;
unsigned char var_7 = (unsigned char)2;
signed char var_10 = (signed char)-54;
unsigned long long int var_11 = 11873434249675155681ULL;
signed char var_12 = (signed char)3;
int zero = 0;
unsigned char var_13 = (unsigned char)149;
signed char var_14 = (signed char)50;
int var_15 = -697046782;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-23006;
int var_18 = -1338714472;
unsigned long long int var_19 = 14454404386003273863ULL;
unsigned char var_20 = (unsigned char)55;
long long int var_21 = 5228712964543529822LL;
unsigned short var_22 = (unsigned short)36855;
signed char var_23 = (signed char)69;
long long int var_24 = -4644781975316542254LL;
_Bool var_25 = (_Bool)0;
signed char arr_0 [17] ;
int arr_2 [17] [17] ;
unsigned char arr_3 [17] [17] ;
unsigned short arr_4 [17] [17] [17] ;
unsigned int arr_12 [14] ;
long long int arr_13 [14] [14] [14] ;
unsigned int arr_16 [14] [14] [14] [14] ;
int arr_20 [14] [14] [14] ;
signed char arr_24 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -275965831;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)46294;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 1010105013U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1705417609023421008LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 2824823288U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -979667690;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)32;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
