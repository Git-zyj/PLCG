#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1420865003;
unsigned short var_1 = (unsigned short)5121;
unsigned long long int var_5 = 8685422205424679888ULL;
unsigned short var_6 = (unsigned short)14534;
short var_9 = (short)-6300;
unsigned long long int var_11 = 13860582848174988632ULL;
unsigned long long int var_13 = 8419140685872680995ULL;
long long int var_15 = 5347548590104991138LL;
signed char var_16 = (signed char)127;
long long int var_18 = -7047373053854628664LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3833099067U;
unsigned char var_22 = (unsigned char)244;
unsigned int var_23 = 2054108413U;
unsigned short var_24 = (unsigned short)18889;
unsigned int var_25 = 3187333976U;
short arr_0 [14] [14] ;
short arr_1 [14] ;
short arr_2 [14] ;
unsigned int arr_3 [14] ;
short arr_5 [14] [14] [14] ;
unsigned char arr_7 [14] ;
signed char arr_8 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-30312;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-20627;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-8830;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1993229899U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)11559;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-13;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
