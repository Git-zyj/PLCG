#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31001;
unsigned char var_7 = (unsigned char)145;
unsigned short var_8 = (unsigned short)20856;
unsigned char var_14 = (unsigned char)253;
short var_17 = (short)-16735;
int zero = 0;
short var_19 = (short)4437;
long long int var_20 = 2627189486759278141LL;
unsigned int var_21 = 887935034U;
unsigned short var_22 = (unsigned short)44829;
_Bool var_23 = (_Bool)1;
long long int var_24 = -4807658154453396017LL;
long long int var_25 = -6517900834291767241LL;
unsigned short var_26 = (unsigned short)9923;
signed char var_27 = (signed char)5;
int arr_1 [19] ;
int arr_2 [19] ;
unsigned char arr_6 [12] ;
int arr_7 [12] [12] ;
short arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 687714866;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 782096382;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)193 : (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -672877345 : -1701344103;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)27347 : (short)-30808;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
