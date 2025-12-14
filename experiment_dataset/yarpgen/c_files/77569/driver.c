#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8729078651368560863ULL;
unsigned short var_1 = (unsigned short)29425;
int var_3 = -2147448410;
signed char var_4 = (signed char)61;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)72;
unsigned char var_7 = (unsigned char)91;
unsigned int var_10 = 3944180375U;
signed char var_11 = (signed char)44;
int zero = 0;
signed char var_12 = (signed char)92;
unsigned short var_13 = (unsigned short)55782;
unsigned int var_14 = 2124198892U;
long long int var_15 = -1280068786023827513LL;
unsigned short var_16 = (unsigned short)61055;
unsigned char arr_0 [24] [24] ;
short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)27759;
}

void checksum() {
    hash(&seed, var_12);
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
