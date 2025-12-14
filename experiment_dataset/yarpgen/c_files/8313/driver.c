#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4149;
unsigned short var_1 = (unsigned short)30704;
long long int var_2 = 8444301893647455872LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-5544;
unsigned long long int var_6 = 217935755903163426ULL;
unsigned short var_7 = (unsigned short)13437;
unsigned short var_8 = (unsigned short)53518;
long long int var_9 = -4764710653257153352LL;
unsigned char var_11 = (unsigned char)235;
int zero = 0;
long long int var_14 = -4901636465839906395LL;
unsigned short var_15 = (unsigned short)56242;
short var_16 = (short)-31973;
unsigned short var_17 = (unsigned short)4329;
short var_18 = (short)-15393;
unsigned char var_19 = (unsigned char)119;
int var_20 = 819602517;
int var_21 = 1087829015;
short var_22 = (short)24686;
short arr_3 [22] [22] [22] ;
_Bool arr_4 [22] [22] ;
short arr_7 [22] [22] [22] [22] ;
signed char arr_10 [22] [22] [22] [22] ;
unsigned char arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-28059;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)13443;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)242 : (unsigned char)133;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
