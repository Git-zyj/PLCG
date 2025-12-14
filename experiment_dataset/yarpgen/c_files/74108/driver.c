#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2615141872379350232ULL;
short var_3 = (short)-8913;
unsigned int var_6 = 1772805313U;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 783155651U;
long long int var_10 = 8403918708328104496LL;
short var_11 = (short)31370;
unsigned long long int var_12 = 10938070353149306228ULL;
short var_14 = (short)-9994;
short var_15 = (short)-12239;
unsigned int var_16 = 3185496628U;
unsigned short var_19 = (unsigned short)25211;
int zero = 0;
unsigned long long int var_20 = 14819908523395242439ULL;
unsigned long long int var_21 = 6356579793022418036ULL;
int var_22 = 1181561496;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)13743;
unsigned long long int var_25 = 8454434215607733124ULL;
_Bool var_26 = (_Bool)1;
long long int var_27 = 6094233893889185790LL;
unsigned long long int var_28 = 8916173725278058912ULL;
unsigned char var_29 = (unsigned char)116;
long long int var_30 = 5619540503609870704LL;
short var_31 = (short)-24167;
_Bool var_32 = (_Bool)1;
unsigned char var_33 = (unsigned char)232;
unsigned char var_34 = (unsigned char)87;
short var_35 = (short)-21957;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)1;
unsigned int var_38 = 2133263615U;
long long int var_39 = 8366965643808772853LL;
signed char var_40 = (signed char)48;
short var_41 = (short)-10602;
unsigned int var_42 = 3950273742U;
unsigned long long int var_43 = 13229080196236038010ULL;
signed char arr_1 [15] [15] ;
unsigned char arr_3 [15] [15] ;
unsigned short arr_4 [15] [15] [15] [15] ;
unsigned char arr_6 [15] [15] [15] [15] [15] [15] ;
long long int arr_7 [15] [15] [15] [15] [15] [15] ;
short arr_9 [15] [15] [15] [15] ;
signed char arr_10 [15] [15] ;
signed char arr_11 [15] [15] ;
unsigned long long int arr_16 [15] ;
short arr_20 [15] ;
unsigned int arr_21 [15] [15] [15] [15] ;
long long int arr_22 [15] [15] [15] ;
_Bool arr_24 [15] [15] [15] [15] ;
unsigned short arr_26 [15] [15] [15] [15] [15] ;
unsigned long long int arr_27 [15] [15] [15] [15] [15] [15] ;
long long int arr_40 [14] [14] [14] ;
long long int arr_43 [14] ;
unsigned long long int arr_48 [21] ;
unsigned char arr_49 [21] ;
unsigned short arr_50 [21] [21] ;
unsigned int arr_51 [21] ;
long long int arr_52 [18] ;
_Bool arr_29 [15] ;
signed char arr_38 [14] [14] [14] ;
_Bool arr_45 [14] [14] ;
long long int arr_46 [14] ;
signed char arr_47 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)57 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned short)23686;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8422188606861106638LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)30758;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 8542206681279555104ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (short)-22014;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1647709259U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -6749532944347276141LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)247;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 8765885403426322830ULL : 4547748651110424887ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 2946036952029642940LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = 8612683413387475948LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? 7702140839548567542ULL : 1655273978816256415ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_49 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_50 [i_0] [i_1] = (unsigned short)39337;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_51 [i_0] = 1505861368U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_52 [i_0] = 7352898397410968521LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_45 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_46 [i_0] = -5919736960984330850LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_47 [i_0] = (signed char)-31;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
