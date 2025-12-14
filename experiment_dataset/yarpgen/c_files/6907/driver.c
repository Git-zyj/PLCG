#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
unsigned char var_4 = (unsigned char)92;
signed char var_5 = (signed char)-62;
signed char var_6 = (signed char)112;
long long int var_7 = 8728908703499695120LL;
unsigned short var_9 = (unsigned short)44005;
unsigned char var_10 = (unsigned char)145;
unsigned short var_12 = (unsigned short)53215;
int zero = 0;
long long int var_14 = 6855892816462947209LL;
signed char var_15 = (signed char)-86;
unsigned char var_16 = (unsigned char)114;
int var_17 = -1206724956;
long long int var_18 = 6432225495465694666LL;
unsigned char var_19 = (unsigned char)237;
_Bool arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned int arr_3 [13] ;
_Bool arr_5 [13] [13] ;
short arr_10 [13] [13] [13] [13] ;
int arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)45653;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 3220436117U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-15974;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1710222951 : 2064754416;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
