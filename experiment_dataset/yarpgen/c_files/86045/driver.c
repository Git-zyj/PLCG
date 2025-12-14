#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -659498099;
unsigned char var_4 = (unsigned char)214;
unsigned char var_6 = (unsigned char)211;
unsigned int var_7 = 1958558639U;
unsigned char var_8 = (unsigned char)35;
long long int var_9 = -1705471388426320591LL;
unsigned int var_10 = 3336148730U;
unsigned char var_11 = (unsigned char)205;
short var_12 = (short)-22241;
int zero = 0;
unsigned int var_15 = 3321620684U;
unsigned char var_16 = (unsigned char)189;
signed char var_17 = (signed char)54;
unsigned char var_18 = (unsigned char)150;
unsigned int var_19 = 70961460U;
unsigned char var_20 = (unsigned char)4;
unsigned char arr_0 [14] [14] ;
unsigned int arr_3 [14] [14] ;
unsigned char arr_4 [14] [14] ;
unsigned char arr_8 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3729649527U : 1686358473U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)165 : (unsigned char)62;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
