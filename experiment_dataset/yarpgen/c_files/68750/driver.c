#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1963786676717909538ULL;
unsigned long long int var_8 = 12160700417308020657ULL;
unsigned char var_9 = (unsigned char)222;
unsigned short var_10 = (unsigned short)43724;
unsigned short var_11 = (unsigned short)33295;
unsigned short var_13 = (unsigned short)40099;
unsigned char var_17 = (unsigned char)68;
int zero = 0;
unsigned short var_19 = (unsigned short)53271;
signed char var_20 = (signed char)-121;
unsigned short var_21 = (unsigned short)61210;
unsigned char var_22 = (unsigned char)209;
unsigned long long int var_23 = 18276893488568534910ULL;
unsigned short var_24 = (unsigned short)53203;
unsigned char var_25 = (unsigned char)242;
unsigned long long int var_26 = 7248879675123084488ULL;
unsigned long long int var_27 = 12584680277746849242ULL;
unsigned long long int var_28 = 10542369081971564794ULL;
unsigned long long int arr_0 [15] ;
unsigned short arr_2 [17] ;
unsigned char arr_3 [17] [17] ;
unsigned long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1725066897198029559ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)3165;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 10252849988219320497ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
