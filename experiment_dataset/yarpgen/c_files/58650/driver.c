#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned short var_1 = (unsigned short)1174;
signed char var_3 = (signed char)-95;
unsigned int var_5 = 2454276870U;
unsigned char var_7 = (unsigned char)163;
unsigned short var_10 = (unsigned short)59361;
int var_11 = -660846799;
int var_15 = 1458112421;
long long int var_17 = -5663475639527113872LL;
unsigned int var_18 = 1938043918U;
int zero = 0;
unsigned short var_19 = (unsigned short)47391;
int var_20 = 2117978265;
unsigned short var_21 = (unsigned short)41531;
unsigned char var_22 = (unsigned char)54;
signed char arr_7 [11] [11] ;
long long int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -3502125331415717857LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
