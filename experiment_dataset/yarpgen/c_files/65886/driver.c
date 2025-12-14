#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
unsigned short var_1 = (unsigned short)26676;
unsigned char var_4 = (unsigned char)228;
unsigned char var_6 = (unsigned char)64;
signed char var_8 = (signed char)-122;
unsigned long long int var_9 = 16177799997038315433ULL;
signed char var_10 = (signed char)-23;
int zero = 0;
unsigned long long int var_11 = 13618844125092083150ULL;
short var_12 = (short)15630;
unsigned long long int var_13 = 483517854806247831ULL;
unsigned char var_14 = (unsigned char)95;
int var_15 = 988711155;
long long int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
int arr_3 [23] [23] ;
unsigned char arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1488620877030761593LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 14192434372064120764ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -1250924841 : -574477702;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)211 : (unsigned char)46;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
