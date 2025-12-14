#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned int var_1 = 3516057778U;
int var_6 = -296593785;
int var_8 = 1600353939;
unsigned char var_9 = (unsigned char)146;
short var_11 = (short)27586;
unsigned char var_15 = (unsigned char)132;
int zero = 0;
int var_17 = 352507026;
unsigned char var_18 = (unsigned char)93;
unsigned char var_19 = (unsigned char)102;
unsigned int var_20 = 3810491262U;
long long int var_21 = 5543360338984878219LL;
unsigned long long int var_22 = 9760736875033633665ULL;
signed char arr_0 [15] ;
unsigned int arr_1 [15] ;
unsigned char arr_2 [15] [15] ;
unsigned long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 34181176U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 2909787006073017708ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
