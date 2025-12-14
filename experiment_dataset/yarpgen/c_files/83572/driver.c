#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)27405;
unsigned short var_8 = (unsigned short)40969;
int var_9 = -1513831555;
unsigned long long int var_10 = 15872245104226430289ULL;
unsigned char var_11 = (unsigned char)195;
long long int var_14 = -6759838793159602865LL;
int var_15 = -1976846356;
long long int var_16 = -4272642189608279209LL;
unsigned short var_18 = (unsigned short)57963;
int zero = 0;
unsigned short var_19 = (unsigned short)44962;
short var_20 = (short)-6541;
unsigned char var_21 = (unsigned char)127;
unsigned char var_22 = (unsigned char)149;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-18550;
_Bool var_25 = (_Bool)0;
long long int var_26 = 4889841846998212932LL;
unsigned short var_27 = (unsigned short)17745;
unsigned char var_28 = (unsigned char)80;
_Bool arr_0 [12] ;
long long int arr_1 [12] ;
_Bool arr_2 [12] ;
long long int arr_3 [12] ;
signed char arr_7 [19] ;
short arr_8 [19] ;
signed char arr_5 [12] ;
unsigned short arr_6 [12] ;
unsigned short arr_9 [19] ;
unsigned short arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3847599351072349461LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 8724362597931720093LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (short)-30905;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)18590;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20504 : (unsigned short)44936;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41527 : (unsigned short)30398;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
