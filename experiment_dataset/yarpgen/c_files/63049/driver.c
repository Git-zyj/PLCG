#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
short var_1 = (short)22974;
short var_3 = (short)-2209;
unsigned char var_4 = (unsigned char)159;
unsigned char var_5 = (unsigned char)56;
short var_6 = (short)-4592;
unsigned char var_7 = (unsigned char)18;
short var_8 = (short)-13405;
unsigned char var_9 = (unsigned char)45;
int var_10 = -1473764907;
unsigned int var_11 = 3185284361U;
unsigned int var_12 = 1621490197U;
int zero = 0;
short var_15 = (short)6879;
unsigned char var_16 = (unsigned char)174;
unsigned int var_17 = 1716969917U;
unsigned short var_18 = (unsigned short)21971;
short var_19 = (short)6646;
short var_20 = (short)-15390;
unsigned int var_21 = 3236633516U;
unsigned short arr_0 [25] ;
short arr_1 [25] [25] ;
unsigned char arr_2 [25] [25] ;
unsigned char arr_4 [25] [25] ;
unsigned char arr_5 [25] [25] ;
unsigned char arr_6 [25] ;
_Bool arr_8 [25] [25] [25] ;
unsigned char arr_9 [25] [25] [25] ;
_Bool arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)10566;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-12973;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)247 : (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
