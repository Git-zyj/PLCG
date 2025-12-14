#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -4374498936087781548LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = -3820567612018280014LL;
unsigned int var_4 = 1572916204U;
unsigned long long int var_5 = 18317854145256439766ULL;
unsigned short var_7 = (unsigned short)1468;
signed char var_8 = (signed char)92;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-90;
int zero = 0;
long long int var_11 = 1583732186941782107LL;
signed char var_12 = (signed char)59;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)245;
short var_18 = (short)-5310;
unsigned long long int var_19 = 8999030400495515651ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
long long int var_23 = 2011169500118316776LL;
signed char var_24 = (signed char)39;
long long int var_25 = 1146819692631846742LL;
_Bool var_26 = (_Bool)0;
long long int var_27 = 5516473030948287909LL;
unsigned short var_28 = (unsigned short)53852;
signed char var_29 = (signed char)-2;
signed char var_30 = (signed char)29;
unsigned int var_31 = 1741095641U;
unsigned long long int var_32 = 3209282420260407260ULL;
long long int arr_6 [24] [24] ;
unsigned int arr_11 [24] ;
_Bool arr_26 [24] [24] [24] ;
unsigned int arr_40 [24] ;
unsigned short arr_41 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -404152022420160853LL : 5217938883982261735LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2852975924U : 2939957838U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? 1740422570U : 4118388648U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48688 : (unsigned short)65085;
}

void checksum() {
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
