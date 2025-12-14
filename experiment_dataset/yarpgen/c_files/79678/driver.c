#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16962666252059707335ULL;
unsigned int var_1 = 254732019U;
signed char var_2 = (signed char)-98;
unsigned int var_3 = 4064359865U;
unsigned long long int var_4 = 17530796038213192623ULL;
long long int var_5 = -7749340033769632688LL;
int var_6 = -1121426356;
int var_7 = 576566431;
signed char var_8 = (signed char)91;
unsigned short var_9 = (unsigned short)17103;
short var_10 = (short)3634;
int var_11 = 1821516794;
unsigned short var_12 = (unsigned short)60384;
unsigned short var_13 = (unsigned short)54043;
long long int var_14 = 7550930898224822813LL;
int zero = 0;
long long int var_15 = -4833212300974013740LL;
signed char var_16 = (signed char)-92;
unsigned long long int var_17 = 11431667077077046485ULL;
long long int var_18 = -7134987935100138683LL;
long long int var_19 = 4630275025237842251LL;
unsigned short var_20 = (unsigned short)46494;
_Bool var_21 = (_Bool)0;
int var_22 = -687879128;
unsigned short var_23 = (unsigned short)22681;
long long int var_24 = 6273447446611037749LL;
short var_25 = (short)32570;
unsigned short var_26 = (unsigned short)5152;
unsigned short var_27 = (unsigned short)28850;
unsigned short var_28 = (unsigned short)1688;
short var_29 = (short)26268;
unsigned long long int var_30 = 12239444761088742136ULL;
int arr_8 [13] [13] ;
int arr_18 [13] [13] [13] [13] [13] ;
signed char arr_19 [13] [13] [13] [13] [13] ;
signed char arr_20 [13] ;
unsigned long long int arr_21 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 1419838611;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 439428743;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = 1287830682300132243ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
