#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
int var_1 = -2102680372;
unsigned char var_2 = (unsigned char)244;
short var_3 = (short)11540;
unsigned char var_4 = (unsigned char)169;
short var_5 = (short)-9209;
unsigned short var_6 = (unsigned short)47005;
signed char var_7 = (signed char)-38;
short var_8 = (short)-4898;
unsigned int var_9 = 1319829069U;
int var_10 = -619555103;
int var_11 = -55730419;
unsigned short var_12 = (unsigned short)30671;
int zero = 0;
short var_13 = (short)30182;
signed char var_14 = (signed char)109;
unsigned char var_15 = (unsigned char)173;
unsigned char var_16 = (unsigned char)54;
unsigned int var_17 = 1783764769U;
unsigned char var_18 = (unsigned char)200;
long long int var_19 = -6600412997124209350LL;
short var_20 = (short)-3385;
unsigned short var_21 = (unsigned short)26264;
unsigned short var_22 = (unsigned short)42376;
short var_23 = (short)-2693;
long long int var_24 = -8508461813690690513LL;
int var_25 = -946022751;
short arr_0 [19] [19] ;
int arr_1 [19] [19] ;
unsigned char arr_2 [19] [19] ;
_Bool arr_3 [19] [19] ;
unsigned char arr_4 [11] ;
signed char arr_5 [11] ;
unsigned char arr_6 [11] ;
unsigned char arr_7 [11] ;
int arr_8 [11] [11] ;
unsigned char arr_9 [11] ;
unsigned char arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-5809;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 197348239;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = -789195452;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)60;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
