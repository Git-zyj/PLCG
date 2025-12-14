#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15666610034978434476ULL;
unsigned short var_2 = (unsigned short)8536;
int var_3 = -322867825;
long long int var_4 = -5355775830607637296LL;
unsigned char var_6 = (unsigned char)202;
short var_8 = (short)-6536;
short var_9 = (short)22648;
unsigned char var_10 = (unsigned char)98;
unsigned int var_13 = 2403415322U;
int zero = 0;
short var_14 = (short)-18957;
unsigned long long int var_15 = 12752195771269687840ULL;
signed char var_16 = (signed char)48;
short var_17 = (short)-6771;
short var_18 = (short)-4040;
unsigned int var_19 = 171228389U;
unsigned long long int arr_0 [25] ;
signed char arr_1 [25] ;
long long int arr_2 [25] ;
long long int arr_7 [25] [25] [25] ;
short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 16207133412579453664ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -8033113179579381581LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 482453027311102378LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)-12582;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
