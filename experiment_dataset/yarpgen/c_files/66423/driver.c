#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-50;
long long int var_4 = 7156520794141752919LL;
signed char var_5 = (signed char)41;
long long int var_7 = 3343585236211251705LL;
unsigned int var_8 = 3871350187U;
int var_9 = 462680821;
int zero = 0;
signed char var_10 = (signed char)15;
long long int var_11 = 3253121078410868461LL;
short var_12 = (short)-14103;
signed char var_13 = (signed char)106;
long long int var_14 = 8105101780484897015LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 325282441U;
short arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)5670 : (short)6402;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3200617707U : 2506969876U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)150 : (unsigned char)78;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
