#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5595599770174321771ULL;
unsigned long long int var_1 = 5887407010502807672ULL;
unsigned char var_3 = (unsigned char)233;
unsigned long long int var_4 = 12976090857792517187ULL;
unsigned char var_6 = (unsigned char)175;
unsigned short var_8 = (unsigned short)63301;
int zero = 0;
signed char var_10 = (signed char)-40;
_Bool var_11 = (_Bool)1;
long long int var_12 = 2844677993283500138LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-24157;
unsigned char var_16 = (unsigned char)86;
signed char var_17 = (signed char)-78;
int var_18 = -1843563169;
long long int var_19 = 9105199948272887609LL;
unsigned long long int var_20 = 16927635634589409815ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)201;
unsigned long long int var_23 = 15680477078708190663ULL;
unsigned long long int var_24 = 10932014120693122329ULL;
int var_25 = 1419303491;
unsigned int arr_19 [22] [22] [22] [22] ;
unsigned short arr_20 [22] [22] [22] ;
int arr_21 [22] ;
signed char arr_28 [24] [24] ;
long long int arr_29 [24] [24] ;
long long int arr_8 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 3365532882U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)50974;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = -1240055868;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_29 [i_0] [i_1] = 2023606908680413511LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -4808981188340079075LL : 5962718258022475885LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
