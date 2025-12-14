#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -692417493;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 3263197716U;
unsigned int var_4 = 1346733451U;
unsigned int var_5 = 1312485164U;
unsigned int var_7 = 483496789U;
short var_8 = (short)-9711;
long long int var_11 = 4502539041104876827LL;
int zero = 0;
unsigned short var_12 = (unsigned short)13700;
unsigned long long int var_13 = 13350408397327270454ULL;
unsigned int var_14 = 435048648U;
unsigned short var_15 = (unsigned short)2426;
unsigned short var_16 = (unsigned short)41655;
int var_17 = -10370318;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12341744569900810914ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)49187;
long long int var_22 = -267344758180940782LL;
unsigned short var_23 = (unsigned short)4742;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned short arr_2 [19] ;
unsigned short arr_3 [19] [19] [19] ;
unsigned long long int arr_4 [19] ;
int arr_5 [19] [19] [19] ;
unsigned short arr_13 [21] [21] ;
int arr_14 [21] ;
long long int arr_15 [21] [21] ;
unsigned short arr_6 [19] ;
long long int arr_7 [19] ;
unsigned int arr_12 [17] [17] ;
unsigned int arr_22 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 12593172391144879286ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 12875499585188190773ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)16545;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)62288;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2639395062037029613ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1067303882;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)64731;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = -1279132475;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = -6092834119335759477LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)54604;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = -1416609550756246426LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 4086597573U : 1589677418U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 603479724U : 774699659U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
