#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4202154182940695514LL;
unsigned int var_2 = 102794010U;
unsigned int var_3 = 3679030288U;
unsigned short var_5 = (unsigned short)57101;
unsigned int var_8 = 705985455U;
_Bool var_14 = (_Bool)0;
unsigned int var_18 = 1597050750U;
int zero = 0;
unsigned long long int var_20 = 12074648257865212599ULL;
unsigned short var_21 = (unsigned short)54942;
unsigned short var_22 = (unsigned short)44922;
unsigned short var_23 = (unsigned short)46821;
unsigned short var_24 = (unsigned short)17279;
long long int var_25 = -6714632660651534949LL;
unsigned short var_26 = (unsigned short)58069;
unsigned short var_27 = (unsigned short)55913;
unsigned int var_28 = 3036706440U;
unsigned long long int var_29 = 16042848430749600610ULL;
unsigned short var_30 = (unsigned short)34800;
signed char var_31 = (signed char)123;
unsigned int var_32 = 1728091141U;
signed char var_33 = (signed char)92;
unsigned short arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
signed char arr_2 [24] ;
short arr_3 [24] [24] ;
long long int arr_4 [24] ;
unsigned short arr_5 [24] ;
unsigned short arr_7 [24] [24] ;
long long int arr_9 [19] ;
unsigned long long int arr_11 [19] ;
unsigned short arr_13 [19] [19] ;
_Bool arr_14 [19] [19] [19] ;
unsigned short arr_15 [19] [19] ;
unsigned char arr_16 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)6485;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)28040;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1272794425170163325LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)56912;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)5711;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = -5187191766745723074LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 9631962732715989963ULL : 17540294965240798394ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)2726;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)64039 : (unsigned short)58445;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)34;
}

void checksum() {
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
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
