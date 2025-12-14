#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15331;
unsigned char var_1 = (unsigned char)38;
unsigned int var_2 = 3554359529U;
unsigned short var_6 = (unsigned short)34040;
signed char var_7 = (signed char)43;
unsigned char var_10 = (unsigned char)182;
int zero = 0;
unsigned char var_13 = (unsigned char)153;
unsigned short var_14 = (unsigned short)42747;
long long int var_15 = 31253397392017181LL;
unsigned short var_16 = (unsigned short)60574;
unsigned int arr_2 [10] [10] [10] ;
short arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3922891056U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)7272;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
