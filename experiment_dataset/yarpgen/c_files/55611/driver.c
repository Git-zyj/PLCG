#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34862;
unsigned int var_1 = 4146443457U;
unsigned int var_2 = 114141188U;
unsigned long long int var_3 = 8292889995584511679ULL;
int var_4 = -588602310;
int var_5 = 113133201;
unsigned long long int var_7 = 15510122246748914993ULL;
unsigned long long int var_8 = 8020406855699324611ULL;
unsigned short var_10 = (unsigned short)10374;
unsigned short var_11 = (unsigned short)48350;
long long int var_12 = 6904487202941992632LL;
unsigned int var_13 = 4168353044U;
unsigned short var_14 = (unsigned short)50940;
long long int var_15 = 5205244134937973794LL;
int zero = 0;
unsigned short var_16 = (unsigned short)62498;
int var_17 = 1839140153;
int arr_3 [20] ;
long long int arr_9 [22] [22] ;
int arr_11 [22] [22] [22] ;
unsigned int arr_13 [22] ;
unsigned long long int arr_15 [22] [22] ;
unsigned short arr_16 [22] [22] [22] [22] [22] [22] ;
long long int arr_17 [22] [22] ;
long long int arr_32 [10] [10] [10] ;
long long int arr_33 [10] [10] [10] [10] ;
int arr_4 [20] ;
unsigned short arr_5 [20] ;
unsigned int arr_18 [22] [22] ;
int arr_19 [22] [22] [22] [22] ;
int arr_20 [22] ;
unsigned int arr_21 [22] ;
_Bool arr_22 [22] ;
long long int arr_27 [21] [21] ;
_Bool arr_28 [21] ;
int arr_35 [10] ;
int arr_36 [10] [10] [10] ;
int arr_37 [10] [10] ;
unsigned int arr_38 [10] [10] [10] ;
_Bool arr_39 [10] ;
int arr_40 [10] ;
int arr_41 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1511335676;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = -562420572057095629LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -445716528;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 3887383209U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = 17256260364919981960ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)25116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = -796565075612210148LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = -5995698202473460123LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -7646096446012166552LL : -7333286948723625700LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1968299032;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)35074;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = 684440214U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = -1776053726;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = -2066837170;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 2796940916U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = -8074016289914784332LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 789461874 : 1795222664;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -101316335 : -1694153566;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_37 [i_0] [i_1] = (i_0 % 2 == 0) ? -209303447 : 1864919712;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4252296012U : 3611460732U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_39 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_40 [i_0] = -1171208657;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = -1774888181;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
