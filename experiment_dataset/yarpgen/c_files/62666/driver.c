#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
signed char var_1 = (signed char)107;
unsigned int var_2 = 960725881U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)127;
unsigned char var_6 = (unsigned char)21;
long long int var_9 = 1844730854316069893LL;
long long int var_10 = 8229001294013050917LL;
unsigned char var_11 = (unsigned char)164;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 17545930094793572362ULL;
unsigned int var_16 = 3694468408U;
long long int var_17 = -3041999206228620671LL;
short var_18 = (short)29108;
unsigned int var_19 = 3341591670U;
unsigned short var_20 = (unsigned short)56616;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)23940;
signed char var_24 = (signed char)-7;
unsigned int var_25 = 661593846U;
unsigned short var_26 = (unsigned short)15366;
signed char arr_0 [25] ;
unsigned int arr_1 [25] ;
unsigned short arr_2 [12] ;
long long int arr_3 [12] ;
long long int arr_4 [12] [12] ;
unsigned long long int arr_11 [12] [12] ;
unsigned short arr_13 [12] [12] [12] ;
long long int arr_15 [12] [12] ;
long long int arr_17 [19] [19] ;
unsigned short arr_22 [19] [19] ;
unsigned long long int arr_26 [19] [19] ;
long long int arr_5 [12] [12] ;
unsigned short arr_16 [12] ;
unsigned long long int arr_20 [19] ;
unsigned int arr_28 [19] [19] [19] ;
unsigned short arr_35 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2086896506U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34738 : (unsigned short)61063;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 9219895932428220706LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -8299265355487573810LL : -3706015565361917434LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = 661648091218208709ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)6932 : (unsigned short)48264;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = -3354096793879735758LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = 1702443260833060963LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)12605;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_26 [i_0] [i_1] = 319338952691797746ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 7664070862596773946LL : 7477181192472667690LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38520 : (unsigned short)51867;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = 8723242776171189684ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 101134193U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = (unsigned short)30011;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
