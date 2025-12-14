#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18276821523190757860ULL;
unsigned char var_2 = (unsigned char)28;
unsigned char var_5 = (unsigned char)73;
int var_7 = 1856819717;
short var_9 = (short)2373;
unsigned long long int var_10 = 512211199530135343ULL;
long long int var_13 = -2020610128436274178LL;
unsigned long long int var_14 = 3194542478435311739ULL;
unsigned short var_16 = (unsigned short)12187;
int var_17 = -1742448847;
int zero = 0;
signed char var_20 = (signed char)-26;
signed char var_21 = (signed char)-4;
short var_22 = (short)-19486;
short var_23 = (short)-743;
signed char arr_0 [21] ;
short arr_1 [21] [21] ;
unsigned char arr_2 [21] ;
unsigned int arr_3 [21] ;
unsigned short arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-20165;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 3140172882U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)49830;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
