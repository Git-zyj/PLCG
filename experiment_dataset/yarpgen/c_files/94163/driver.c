#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
short var_4 = (short)-29679;
unsigned short var_8 = (unsigned short)18086;
int var_9 = -1843185073;
unsigned char var_11 = (unsigned char)185;
unsigned char var_12 = (unsigned char)224;
unsigned short var_13 = (unsigned short)24005;
int zero = 0;
unsigned int var_17 = 829722097U;
long long int var_18 = 6662062020025924646LL;
unsigned short var_19 = (unsigned short)44338;
short var_20 = (short)-31460;
unsigned short var_21 = (unsigned short)19723;
unsigned int var_22 = 2046979474U;
int var_23 = -32767245;
long long int var_24 = -7376552126880234175LL;
unsigned int var_25 = 3267923732U;
unsigned short var_26 = (unsigned short)56173;
unsigned short var_27 = (unsigned short)54771;
int var_28 = 425933409;
unsigned short arr_0 [20] [20] ;
unsigned short arr_1 [20] [20] ;
int arr_5 [20] [20] ;
long long int arr_6 [20] [20] ;
short arr_8 [16] ;
unsigned char arr_9 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)65185;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)41738;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 109445494;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = -7187172120082891719LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)30540;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)194;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
