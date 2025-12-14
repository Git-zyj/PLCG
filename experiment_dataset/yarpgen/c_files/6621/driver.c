#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
long long int var_1 = 3785003828035651507LL;
short var_2 = (short)2476;
unsigned short var_3 = (unsigned short)62697;
signed char var_4 = (signed char)-29;
unsigned short var_5 = (unsigned short)4074;
short var_6 = (short)29191;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)20;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2780491486U;
unsigned char var_12 = (unsigned char)250;
unsigned char var_13 = (unsigned char)63;
long long int var_14 = -6940304044157929200LL;
long long int var_15 = -8982815553390184091LL;
signed char var_16 = (signed char)44;
unsigned short var_17 = (unsigned short)6293;
unsigned short var_18 = (unsigned short)6015;
short var_19 = (short)10404;
unsigned char var_20 = (unsigned char)12;
long long int arr_0 [14] ;
unsigned int arr_1 [14] ;
long long int arr_4 [18] [18] ;
unsigned short arr_5 [18] ;
signed char arr_6 [18] ;
long long int arr_7 [18] ;
long long int arr_8 [18] ;
long long int arr_2 [14] ;
unsigned char arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -5080822773149653159LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3651510122U : 2598100326U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 6547481531039393938LL : 1904211831825444921LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)60477;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 359566263617066787LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 6818638550542414931LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2768114537186435916LL : -6968006265918579254LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)0 : (unsigned char)208;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
