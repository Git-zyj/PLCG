#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1131694412;
unsigned long long int var_6 = 3951329201698489398ULL;
signed char var_7 = (signed char)-106;
int zero = 0;
unsigned int var_11 = 1502907552U;
signed char var_12 = (signed char)58;
signed char var_13 = (signed char)91;
unsigned short var_14 = (unsigned short)29986;
unsigned int var_15 = 2190501086U;
signed char var_16 = (signed char)-61;
unsigned int var_17 = 3455271339U;
unsigned int var_18 = 1848558435U;
signed char arr_0 [25] ;
unsigned int arr_1 [25] ;
unsigned short arr_2 [25] ;
short arr_3 [25] ;
unsigned int arr_6 [25] [25] [25] [25] ;
unsigned long long int arr_7 [25] [25] [25] ;
signed char arr_12 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1350866151U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)56224;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)17769;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1416037707U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2920055595361600015ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)-103;
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
