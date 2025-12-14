#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned char var_1 = (unsigned char)14;
int var_3 = 160105440;
unsigned long long int var_5 = 14340771159987704960ULL;
unsigned char var_7 = (unsigned char)75;
short var_8 = (short)-21784;
_Bool var_11 = (_Bool)1;
int var_12 = 1120949221;
long long int var_14 = -5570451722105871346LL;
int zero = 0;
int var_15 = -1787144319;
int var_16 = 668546726;
unsigned char var_17 = (unsigned char)82;
unsigned short var_18 = (unsigned short)14752;
unsigned int arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
signed char arr_2 [14] ;
unsigned long long int arr_4 [14] [14] ;
unsigned char arr_5 [14] ;
unsigned char arr_6 [14] ;
unsigned short arr_7 [14] ;
unsigned int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 22497321U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 15451869563657947538ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 7440766848431128797ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned short)22401;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 3240988492U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
