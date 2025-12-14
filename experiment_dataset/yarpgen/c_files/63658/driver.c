#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6737415080163403444LL;
unsigned long long int var_1 = 11657445710812029618ULL;
unsigned short var_2 = (unsigned short)60256;
unsigned char var_3 = (unsigned char)242;
unsigned long long int var_4 = 14650496495268479748ULL;
int var_8 = 1873685528;
short var_9 = (short)-31320;
unsigned long long int var_11 = 2232925262964738683ULL;
unsigned long long int var_13 = 3457735590809563807ULL;
signed char var_14 = (signed char)-89;
unsigned char var_15 = (unsigned char)195;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)203;
int zero = 0;
unsigned long long int var_19 = 16385927962483089500ULL;
unsigned long long int var_20 = 11950648456530201813ULL;
short var_21 = (short)-31871;
unsigned long long int var_22 = 5385214804843583333ULL;
unsigned char var_23 = (unsigned char)75;
unsigned int arr_0 [23] ;
unsigned char arr_1 [23] ;
int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3730685062U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 936352888;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6879550053925890325ULL : 16521816085230023310ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -573700134;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
