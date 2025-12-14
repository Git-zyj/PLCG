#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2054788951U;
int var_1 = 1468364773;
unsigned int var_2 = 3075982197U;
long long int var_5 = -4223489210185518270LL;
unsigned int var_6 = 3126692142U;
unsigned int var_7 = 1829034115U;
signed char var_8 = (signed char)29;
int var_9 = -103986734;
unsigned int var_10 = 3478321720U;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = -449128319;
unsigned int var_13 = 3722338786U;
int var_14 = 68254224;
signed char var_15 = (signed char)-6;
unsigned int var_16 = 1492822414U;
unsigned int var_17 = 880494793U;
unsigned int var_18 = 2427062325U;
unsigned int var_19 = 2890711625U;
signed char var_20 = (signed char)82;
long long int var_21 = 4819966596141687318LL;
_Bool arr_1 [19] ;
int arr_3 [19] ;
unsigned int arr_4 [19] [19] [19] ;
short arr_6 [14] ;
signed char arr_8 [14] [14] ;
signed char arr_14 [14] [14] [14] [14] ;
signed char arr_39 [21] ;
unsigned int arr_40 [21] ;
long long int arr_19 [14] [14] [14] ;
int arr_20 [14] [14] ;
short arr_24 [14] [14] ;
unsigned int arr_38 [14] [14] [14] [14] ;
int arr_41 [21] ;
long long int arr_42 [21] ;
unsigned int arr_46 [16] ;
unsigned int arr_47 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1058986979;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1975375848U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)19113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_39 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_40 [i_0] = 710862386U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -8972350201190651050LL : 2321121685217133806LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = 940340692;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31904 : (short)-30378;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 2719258342U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_41 [i_0] = 785643405;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_42 [i_0] = 1476626367808710399LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_46 [i_0] = 3284715243U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_47 [i_0] = 4105519513U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
