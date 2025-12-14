#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 16902107215236961420ULL;
unsigned int var_3 = 3687833138U;
long long int var_4 = -6261679531710488323LL;
unsigned int var_5 = 3640216646U;
unsigned short var_6 = (unsigned short)36344;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 17232390627157755531ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 8904953076647916400ULL;
unsigned int var_11 = 904255571U;
unsigned short var_12 = (unsigned short)7762;
long long int var_13 = 6788476217731361365LL;
unsigned int var_14 = 2492259814U;
signed char var_15 = (signed char)61;
int zero = 0;
long long int var_16 = -2863904124525346282LL;
long long int var_17 = 2025198161910510552LL;
unsigned char var_18 = (unsigned char)26;
long long int var_19 = 2183545865857548198LL;
unsigned short var_20 = (unsigned short)56347;
int var_21 = 2096270985;
int var_22 = 239195995;
long long int var_23 = -8717808278357560291LL;
unsigned char var_24 = (unsigned char)232;
unsigned char var_25 = (unsigned char)150;
_Bool var_26 = (_Bool)1;
short var_27 = (short)19967;
int var_28 = 1821247945;
unsigned long long int var_29 = 2569816489772284965ULL;
unsigned int var_30 = 3964333572U;
_Bool var_31 = (_Bool)1;
unsigned char var_32 = (unsigned char)188;
unsigned int var_33 = 1867935353U;
long long int var_34 = -6137664567924524014LL;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)-37;
unsigned char var_37 = (unsigned char)210;
long long int var_38 = -111422028033751342LL;
unsigned char var_39 = (unsigned char)195;
long long int var_40 = 5649089554186301176LL;
unsigned long long int var_41 = 14312998204231845317ULL;
unsigned int var_42 = 3723912536U;
signed char var_43 = (signed char)-97;
unsigned short var_44 = (unsigned short)50508;
unsigned char var_45 = (unsigned char)54;
signed char var_46 = (signed char)-110;
_Bool var_47 = (_Bool)0;
short arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
int arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] ;
int arr_5 [23] [23] ;
unsigned char arr_7 [23] [23] [23] ;
unsigned long long int arr_9 [23] ;
long long int arr_11 [23] [23] [23] [23] [23] ;
short arr_14 [23] [23] ;
unsigned char arr_18 [23] [23] ;
unsigned long long int arr_22 [23] [23] [23] [23] [23] ;
unsigned char arr_23 [23] [23] [23] [23] [23] ;
long long int arr_25 [23] [23] [23] [23] [23] [23] [23] ;
int arr_28 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_30 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)8200 : (short)-12031;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1435763688U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 811594100 : 243521198;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 659901550U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -2143734377;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 3443932708242072153ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -4663296503676164198LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-30083;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 12719169412557637754ULL : 11664867502432723905ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1335147110876213339LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -661860770;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = 2951526371U;
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
