#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1295263270213504143LL;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-1830;
short var_4 = (short)-20274;
short var_6 = (short)-26993;
unsigned short var_8 = (unsigned short)49536;
unsigned int var_9 = 1804473045U;
int var_10 = 1389618544;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2774069035U;
int zero = 0;
unsigned int var_14 = 2082237350U;
signed char var_15 = (signed char)-22;
unsigned short var_16 = (unsigned short)54501;
unsigned int var_17 = 3257124503U;
_Bool var_18 = (_Bool)1;
int var_19 = 253510771;
long long int var_20 = -1179559565507796183LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)177;
unsigned short var_23 = (unsigned short)43315;
unsigned char var_24 = (unsigned char)85;
unsigned short arr_0 [22] ;
short arr_1 [22] ;
short arr_4 [22] ;
long long int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)53858;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-14659;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)17962;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -9121387919075412020LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
