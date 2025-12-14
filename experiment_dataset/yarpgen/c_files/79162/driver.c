#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31687;
signed char var_2 = (signed char)-120;
unsigned long long int var_3 = 2936501335040367254ULL;
signed char var_4 = (signed char)81;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1699541412U;
unsigned short var_9 = (unsigned short)27219;
unsigned char var_10 = (unsigned char)236;
signed char var_11 = (signed char)103;
int zero = 0;
int var_12 = 1667311741;
signed char var_13 = (signed char)-116;
signed char var_14 = (signed char)28;
unsigned int var_15 = 3848201960U;
unsigned short var_16 = (unsigned short)22515;
int var_17 = 659686831;
unsigned short var_18 = (unsigned short)38838;
unsigned short arr_0 [16] ;
unsigned char arr_1 [16] ;
signed char arr_3 [16] ;
unsigned char arr_7 [20] ;
signed char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)5728;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-39;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
