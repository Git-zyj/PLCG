#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
signed char var_3 = (signed char)-116;
int var_4 = 1517033438;
long long int var_5 = 112383564409833874LL;
int var_6 = 2030054049;
short var_7 = (short)24830;
unsigned int var_8 = 2896017155U;
int var_9 = -1081860511;
short var_10 = (short)22459;
long long int var_11 = 7074665879338385700LL;
unsigned long long int var_13 = 17526832065557580569ULL;
unsigned long long int var_14 = 7200016197631671922ULL;
unsigned long long int var_15 = 4148752955554148605ULL;
int var_16 = -999615941;
int zero = 0;
int var_17 = -427666643;
long long int var_18 = -874246987936017113LL;
unsigned long long int var_19 = 15812076759311952920ULL;
long long int var_20 = -5210711495306540255LL;
signed char var_21 = (signed char)106;
int var_22 = -2085628555;
unsigned int var_23 = 2010061657U;
int var_24 = 558651619;
short var_25 = (short)-32310;
long long int var_26 = 5309411298967228159LL;
unsigned long long int var_27 = 10976348940392959689ULL;
short var_28 = (short)-5726;
unsigned long long int arr_0 [25] ;
long long int arr_1 [25] [25] ;
int arr_3 [25] ;
short arr_4 [25] ;
unsigned long long int arr_10 [25] ;
unsigned long long int arr_11 [25] [25] [25] ;
long long int arr_12 [25] [25] ;
int arr_2 [25] ;
short arr_5 [25] ;
unsigned long long int arr_8 [25] [25] ;
int arr_13 [25] ;
unsigned long long int arr_14 [25] ;
unsigned long long int arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 6216913123552725586ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -5743182233411908659LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1293222313 : -1825904398;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-29875 : (short)-1116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 17652012107675172158ULL : 10330318248439223227ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 17260582850870018001ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -3295515116046747232LL : -9059538746326125628LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -7860601 : 2013367146;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-14184 : (short)26390;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 9522434781133966276ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -640274342 : 213702598;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 6898132338975991363ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = 7630487681948277791ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
