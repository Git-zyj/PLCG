#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-10;
_Bool var_6 = (_Bool)0;
long long int var_8 = -8579337489457444329LL;
signed char var_14 = (signed char)-100;
unsigned short var_16 = (unsigned short)1751;
unsigned char var_17 = (unsigned char)177;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)3461;
unsigned char var_20 = (unsigned char)193;
int var_21 = -1921163416;
short var_22 = (short)454;
signed char var_23 = (signed char)87;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)65118;
signed char var_26 = (signed char)-80;
unsigned short var_27 = (unsigned short)43029;
int var_28 = -1277843421;
long long int var_29 = -3968547105412617284LL;
int var_30 = 596456764;
_Bool var_31 = (_Bool)1;
int var_32 = 352980373;
int var_33 = 1121262339;
signed char var_34 = (signed char)39;
signed char var_35 = (signed char)-108;
short var_36 = (short)29950;
int var_37 = 1781067071;
int var_38 = 62889475;
_Bool var_39 = (_Bool)1;
unsigned short var_40 = (unsigned short)8980;
short var_41 = (short)1404;
signed char var_42 = (signed char)37;
unsigned char var_43 = (unsigned char)134;
signed char var_44 = (signed char)19;
short var_45 = (short)18602;
int var_46 = 901628923;
signed char var_47 = (signed char)80;
int arr_1 [13] ;
signed char arr_2 [13] [13] ;
short arr_3 [13] [13] ;
_Bool arr_4 [13] ;
unsigned short arr_5 [13] ;
int arr_8 [13] ;
long long int arr_14 [13] [13] [13] ;
long long int arr_19 [13] [13] ;
signed char arr_23 [13] [13] [13] ;
_Bool arr_25 [13] [13] [13] [13] ;
unsigned short arr_32 [13] [13] [13] [13] ;
unsigned short arr_36 [13] ;
int arr_6 [13] ;
unsigned short arr_17 [13] ;
long long int arr_18 [13] ;
long long int arr_26 [13] [13] ;
long long int arr_31 [13] [13] [13] [13] ;
unsigned short arr_39 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -2114380239;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)22756;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)62978;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -2117508021;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -7857613102299143900LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = -184165478414176724LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned short)6651;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = (unsigned short)30008;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -528936882;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (unsigned short)23683;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = -1748104954445647407LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = -2002439584409762758LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5758504884852369375LL : -5751192542190347081LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64802 : (unsigned short)29624;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
