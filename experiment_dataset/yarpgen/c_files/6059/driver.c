#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
unsigned short var_2 = (unsigned short)47861;
unsigned int var_7 = 2495514836U;
long long int var_8 = 7542773769901473321LL;
unsigned short var_9 = (unsigned short)4934;
unsigned int var_10 = 2078493040U;
signed char var_11 = (signed char)-111;
signed char var_12 = (signed char)37;
int zero = 0;
signed char var_13 = (signed char)124;
unsigned int var_14 = 1973299924U;
unsigned int var_15 = 2720730809U;
unsigned char var_16 = (unsigned char)52;
unsigned short var_17 = (unsigned short)28043;
short arr_6 [23] [23] [23] ;
unsigned int arr_8 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-19117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 994888775U : 3038778U;
}

void checksum() {
    hash(&seed, var_13);
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
