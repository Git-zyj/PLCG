#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 5596651233756631760LL;
unsigned char var_2 = (unsigned char)195;
_Bool var_3 = (_Bool)0;
long long int var_4 = -3458028500536772761LL;
unsigned short var_5 = (unsigned short)10468;
unsigned short var_6 = (unsigned short)35464;
long long int var_7 = 2832791105259912199LL;
unsigned long long int var_8 = 8169380239316963704ULL;
int var_9 = 878447759;
long long int var_10 = -3674667381383476822LL;
short var_11 = (short)-14775;
signed char var_12 = (signed char)31;
short var_13 = (short)-11568;
unsigned short var_14 = (unsigned short)47155;
int zero = 0;
unsigned long long int var_15 = 16149092743825941694ULL;
unsigned short var_16 = (unsigned short)13980;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3188939429U;
short var_19 = (short)6909;
unsigned int var_20 = 1352312000U;
unsigned short var_21 = (unsigned short)25867;
unsigned long long int var_22 = 1532213226018590162ULL;
signed char var_23 = (signed char)-49;
long long int var_24 = -41268970312766893LL;
unsigned int var_25 = 3633071608U;
short arr_0 [12] [12] ;
_Bool arr_1 [12] [12] ;
unsigned short arr_2 [12] ;
long long int arr_4 [15] [15] ;
long long int arr_6 [23] ;
short arr_7 [23] [23] ;
_Bool arr_8 [23] ;
unsigned long long int arr_9 [23] [23] [23] ;
unsigned short arr_10 [23] [23] ;
short arr_11 [23] [23] [23] [23] ;
long long int arr_12 [23] [23] ;
_Bool arr_13 [23] [23] [23] [23] ;
unsigned int arr_14 [23] [23] [23] [23] [23] [23] ;
_Bool arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)5929;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)28034;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 6646188844634875217LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -7541445960711870965LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (short)20916;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 15071926038112900092ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61918 : (unsigned short)34463;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)28466 : (short)9935;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -4128951558532999440LL : 8133988321876136850LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2363777815U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
