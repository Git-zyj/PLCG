#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)172;
unsigned char var_3 = (unsigned char)86;
long long int var_4 = -544811458311141763LL;
unsigned char var_7 = (unsigned char)202;
_Bool var_8 = (_Bool)1;
long long int var_10 = 5097889006873757001LL;
int zero = 0;
unsigned char var_14 = (unsigned char)1;
short var_15 = (short)5571;
unsigned char var_16 = (unsigned char)227;
short var_17 = (short)30813;
unsigned char var_18 = (unsigned char)122;
unsigned char var_19 = (unsigned char)103;
short arr_5 [17] ;
_Bool arr_11 [24] ;
long long int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-17994;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 5464964979689122149LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
