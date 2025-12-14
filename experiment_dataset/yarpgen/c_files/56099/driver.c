#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56911;
unsigned short var_4 = (unsigned short)22547;
signed char var_6 = (signed char)69;
unsigned long long int var_7 = 14412151973113677879ULL;
unsigned short var_8 = (unsigned short)8754;
signed char var_9 = (signed char)63;
unsigned short var_10 = (unsigned short)50969;
unsigned int var_11 = 2644335399U;
unsigned short var_12 = (unsigned short)41272;
unsigned long long int var_13 = 18428398523653875656ULL;
int zero = 0;
signed char var_14 = (signed char)-63;
unsigned int var_15 = 4035713024U;
unsigned int var_16 = 2866577768U;
unsigned short var_17 = (unsigned short)19047;
unsigned short var_18 = (unsigned short)31881;
unsigned long long int arr_0 [19] ;
unsigned int arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
_Bool arr_5 [19] ;
unsigned short arr_7 [19] [19] [19] [19] ;
_Bool arr_8 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 9631309193027880400ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2655531978U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)56818;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)61920;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
