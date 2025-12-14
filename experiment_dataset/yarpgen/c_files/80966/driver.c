#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1663598461;
unsigned char var_1 = (unsigned char)230;
unsigned int var_2 = 3041158172U;
long long int var_3 = -3549859641791696768LL;
int var_6 = 350704073;
long long int var_7 = -1954435690813832618LL;
short var_11 = (short)-19946;
int zero = 0;
int var_12 = 949647395;
unsigned char var_13 = (unsigned char)2;
unsigned int var_14 = 3203265905U;
long long int var_15 = -3726661787090384793LL;
unsigned char var_16 = (unsigned char)86;
unsigned char var_17 = (unsigned char)140;
short var_18 = (short)-32218;
long long int var_19 = 8278807442289926657LL;
unsigned short arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
unsigned char arr_2 [23] ;
int arr_3 [23] ;
signed char arr_4 [23] [23] [23] ;
signed char arr_5 [22] ;
long long int arr_6 [22] ;
long long int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47105 : (unsigned short)64192;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)196 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1788020185;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)119 : (signed char)-125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -6873983195630562934LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 3771184557115785836LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
