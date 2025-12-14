#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
short var_2 = (short)-22199;
short var_5 = (short)7554;
int var_8 = -439105608;
unsigned int var_9 = 2008147074U;
short var_10 = (short)24576;
unsigned int var_13 = 757437929U;
int zero = 0;
unsigned int var_16 = 1125397315U;
unsigned int var_17 = 3158235334U;
long long int var_18 = -1752391974283933721LL;
short var_19 = (short)8548;
int var_20 = -51784466;
unsigned char var_21 = (unsigned char)78;
int var_22 = 682484291;
short var_23 = (short)4326;
long long int var_24 = -5137971669587149497LL;
short var_25 = (short)-13069;
signed char var_26 = (signed char)-101;
unsigned short var_27 = (unsigned short)50381;
int var_28 = 966946475;
int var_29 = -1973981073;
int var_30 = 1489931601;
unsigned int var_31 = 542105986U;
int var_32 = 758403005;
unsigned char var_33 = (unsigned char)12;
unsigned long long int var_34 = 11517148646193111856ULL;
signed char arr_0 [13] ;
signed char arr_1 [13] ;
_Bool arr_2 [13] ;
unsigned short arr_3 [13] ;
short arr_5 [12] ;
unsigned int arr_6 [12] ;
unsigned int arr_7 [12] ;
int arr_8 [12] [12] ;
int arr_9 [12] ;
signed char arr_18 [10] ;
short arr_19 [10] ;
unsigned long long int arr_24 [10] [10] [10] ;
short arr_25 [10] ;
int arr_27 [10] [10] [10] ;
signed char arr_29 [10] [10] [10] ;
long long int arr_32 [10] [10] [10] ;
unsigned short arr_37 [10] [10] ;
signed char arr_39 [10] ;
short arr_4 [13] ;
unsigned int arr_11 [12] ;
unsigned int arr_12 [12] [12] [12] ;
unsigned long long int arr_15 [12] [12] [12] ;
unsigned char arr_20 [10] ;
unsigned int arr_30 [10] ;
_Bool arr_38 [10] [10] [10] ;
unsigned int arr_41 [10] ;
short arr_42 [10] [10] [10] [10] ;
_Bool arr_45 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)47505;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)28372;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 3970460355U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 1079610562U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 1737657935;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = -1569834755;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)8 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)15416 : (short)-13138;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17606241578580360068ULL : 2156836161322868862ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = (short)-286;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1000161538 : -448985127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-127 : (signed char)22;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -9040729894613228706LL : -2148951542433598504LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_37 [i_0] [i_1] = (unsigned short)28626;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_39 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)26914;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 1506839074U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 589008233U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 8833594103343390258ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)190 : (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 4056833087U : 3623668408U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? 1384156538U : 612687815U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)17172 : (short)-17801;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
