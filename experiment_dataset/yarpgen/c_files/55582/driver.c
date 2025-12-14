#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1215618715U;
unsigned char var_1 = (unsigned char)88;
short var_5 = (short)-8902;
unsigned char var_6 = (unsigned char)127;
int var_7 = -61210076;
unsigned char var_9 = (unsigned char)20;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3928165872560544095LL;
signed char var_12 = (signed char)-53;
unsigned short var_13 = (unsigned short)22871;
int var_14 = -1255660002;
unsigned char var_15 = (unsigned char)77;
int zero = 0;
short var_16 = (short)5839;
long long int var_17 = 6596954804501296501LL;
unsigned short var_18 = (unsigned short)61710;
unsigned int var_19 = 1512981916U;
unsigned short var_20 = (unsigned short)10965;
unsigned char var_21 = (unsigned char)165;
unsigned int var_22 = 1690803800U;
unsigned long long int var_23 = 626109812795036611ULL;
unsigned char arr_0 [16] [16] ;
unsigned int arr_1 [16] [16] ;
unsigned char arr_4 [14] [14] ;
unsigned short arr_6 [14] ;
int arr_2 [16] ;
signed char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 74313586U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)24408;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1030987723 : 214439413;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)67 : (signed char)49;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
