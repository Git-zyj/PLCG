#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 2720695895273486504LL;
unsigned char var_2 = (unsigned char)209;
int var_3 = -728601392;
signed char var_4 = (signed char)-75;
signed char var_5 = (signed char)-79;
long long int var_6 = -3030915329143084042LL;
unsigned int var_7 = 890457070U;
signed char var_8 = (signed char)29;
unsigned char var_9 = (unsigned char)90;
signed char var_10 = (signed char)125;
signed char var_11 = (signed char)-103;
signed char var_12 = (signed char)-78;
int var_13 = -587038420;
signed char var_14 = (signed char)-28;
unsigned char var_15 = (unsigned char)253;
unsigned long long int var_16 = 13386396188884587095ULL;
int zero = 0;
unsigned long long int var_17 = 8500123966076554824ULL;
long long int var_18 = 7855778423924113318LL;
signed char var_19 = (signed char)28;
int var_20 = -1994030699;
unsigned long long int var_21 = 1638971245087641890ULL;
long long int var_22 = -6284527492007234444LL;
long long int var_23 = -1442476441711777389LL;
unsigned char var_24 = (unsigned char)103;
int var_25 = 1525404689;
long long int var_26 = -8359809342090409889LL;
unsigned char var_27 = (unsigned char)137;
unsigned long long int var_28 = 16763062865743164326ULL;
unsigned short var_29 = (unsigned short)47254;
unsigned long long int var_30 = 3100826352315866776ULL;
unsigned short var_31 = (unsigned short)58692;
signed char var_32 = (signed char)63;
unsigned char var_33 = (unsigned char)28;
unsigned short var_34 = (unsigned short)36938;
signed char var_35 = (signed char)-127;
long long int var_36 = 6225094491580530114LL;
signed char var_37 = (signed char)-1;
unsigned long long int var_38 = 7661827754311053555ULL;
signed char var_39 = (signed char)-25;
signed char var_40 = (signed char)77;
signed char var_41 = (signed char)-10;
unsigned short var_42 = (unsigned short)27991;
signed char var_43 = (signed char)72;
unsigned long long int var_44 = 2660007101653042345ULL;
unsigned char var_45 = (unsigned char)222;
signed char var_46 = (signed char)119;
unsigned char var_47 = (unsigned char)177;
_Bool var_48 = (_Bool)1;
unsigned int var_49 = 1365611778U;
unsigned char arr_0 [10] [10] ;
int arr_1 [10] [10] ;
signed char arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
unsigned long long int arr_4 [25] [25] ;
signed char arr_5 [25] ;
unsigned int arr_6 [25] [25] [25] [25] ;
int arr_10 [25] [25] ;
unsigned int arr_11 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_14 [25] [25] [25] [25] [25] ;
unsigned short arr_15 [25] [25] [25] [25] [25] ;
unsigned int arr_16 [25] [25] [25] [25] [25] ;
unsigned long long int arr_18 [25] [25] [25] [25] ;
unsigned char arr_19 [25] [25] [25] [25] ;
unsigned int arr_20 [25] [25] [25] [25] ;
unsigned long long int arr_24 [25] [25] [25] [25] ;
unsigned char arr_27 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 546713332;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 2923263967U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 8018484074747030348ULL : 17809612928726976847ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-13 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3568002834U : 430585048U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 1069281003;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 3656656465U : 1762427332U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 11871470882095685728ULL : 13363454886230191770ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)54513 : (unsigned short)13230;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 483671958U : 1291077856U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 15029231204114871477ULL : 648042029865681203ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)61 : (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2853861256U : 1255715283U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1802024358513848975ULL : 7541371851398563030ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)234 : (unsigned char)130;
}

void checksum() {
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
