#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)35614;
unsigned short var_5 = (unsigned short)5243;
unsigned short var_6 = (unsigned short)31879;
unsigned short var_7 = (unsigned short)52500;
signed char var_8 = (signed char)61;
unsigned short var_11 = (unsigned short)42938;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1872334632874333945LL;
signed char var_14 = (signed char)-66;
unsigned long long int var_15 = 827301995926643892ULL;
int zero = 0;
signed char var_16 = (signed char)118;
long long int var_17 = 2088489357387984841LL;
unsigned short var_18 = (unsigned short)52574;
unsigned short var_19 = (unsigned short)36443;
unsigned long long int var_20 = 5506475647197272301ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 12748768633016610818ULL;
signed char var_23 = (signed char)3;
long long int var_24 = 5909177656001322161LL;
unsigned short var_25 = (unsigned short)53987;
short var_26 = (short)-6129;
unsigned short var_27 = (unsigned short)64970;
signed char var_28 = (signed char)-50;
unsigned long long int var_29 = 1227885198813575651ULL;
signed char var_30 = (signed char)-22;
int var_31 = 220089526;
_Bool var_32 = (_Bool)0;
long long int var_33 = -3472395500431126707LL;
short var_34 = (short)-30814;
_Bool var_35 = (_Bool)1;
unsigned long long int var_36 = 6543971278542400690ULL;
unsigned short var_37 = (unsigned short)33875;
unsigned short var_38 = (unsigned short)46356;
long long int var_39 = 6662609502630151647LL;
unsigned short var_40 = (unsigned short)32037;
unsigned long long int arr_3 [15] ;
short arr_4 [15] [15] ;
unsigned short arr_6 [15] [15] ;
unsigned long long int arr_8 [14] ;
unsigned long long int arr_16 [23] ;
_Bool arr_18 [23] [23] [23] ;
unsigned long long int arr_19 [23] [23] [23] ;
unsigned long long int arr_22 [23] [23] [23] [23] ;
unsigned char arr_28 [23] [23] [23] [23] [23] ;
unsigned short arr_30 [23] ;
short arr_40 [23] [23] [23] [23] ;
_Bool arr_11 [14] ;
unsigned short arr_17 [23] ;
short arr_32 [23] [23] [23] ;
unsigned long long int arr_42 [23] [23] [23] ;
unsigned long long int arr_43 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 7358030675603832743ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-1421;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)21297;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1668016362736692939ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 17808205885617960179ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 303427103196960411ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 13338383559070863574ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (unsigned short)54100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (short)31038;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (unsigned short)4849;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (short)25504;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14308367702536107315ULL : 8319021904645038408ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_43 [i_0] = 16354898454282284905ULL;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
