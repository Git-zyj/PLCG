#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 259030368;
unsigned int var_2 = 728047030U;
unsigned int var_3 = 1761219952U;
unsigned int var_5 = 3168401286U;
long long int var_7 = -6464167830542766286LL;
long long int var_8 = -8419969929053306085LL;
unsigned long long int var_9 = 11077194713813593732ULL;
unsigned short var_11 = (unsigned short)261;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)47;
int var_21 = 1349901598;
unsigned char var_22 = (unsigned char)27;
long long int var_23 = -3565329120033649792LL;
long long int var_24 = 2861488708247234581LL;
unsigned short var_25 = (unsigned short)4367;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)59505;
long long int var_28 = -7941373304688519448LL;
unsigned short var_29 = (unsigned short)28455;
unsigned short var_30 = (unsigned short)63761;
unsigned int var_31 = 3613712157U;
unsigned short var_32 = (unsigned short)63040;
unsigned char var_33 = (unsigned char)69;
int var_34 = -1340167628;
unsigned int var_35 = 2054227390U;
long long int var_36 = -2729316260365798242LL;
long long int arr_0 [12] ;
long long int arr_1 [12] ;
unsigned int arr_4 [14] ;
short arr_5 [14] ;
int arr_7 [14] ;
unsigned int arr_8 [14] [14] [14] ;
_Bool arr_10 [14] ;
unsigned short arr_11 [14] [14] [14] ;
unsigned short arr_15 [14] [14] [14] ;
long long int arr_16 [14] [14] ;
unsigned long long int arr_17 [14] ;
unsigned long long int arr_19 [14] ;
unsigned short arr_21 [15] ;
unsigned int arr_22 [15] ;
unsigned long long int arr_23 [15] ;
unsigned short arr_2 [12] [12] ;
unsigned short arr_12 [14] [14] [14] ;
unsigned short arr_20 [14] [14] [14] [14] [14] [14] ;
_Bool arr_24 [15] ;
long long int arr_25 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1585676900165432927LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -2109716302037656359LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 2826399800U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-13208;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -323370305;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 48654289U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)18581;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)1174;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = -1664396310877784821LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 5429613015124440615ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 10971687793689239971ULL : 12769409832079465572ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (unsigned short)62379;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 2332783590U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 11958737470154993694ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)25342;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)41592;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned short)18558 : (unsigned short)18436;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = -3551921057774341869LL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
