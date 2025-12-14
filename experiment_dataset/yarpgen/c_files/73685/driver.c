#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4846;
unsigned long long int var_2 = 947959444678037622ULL;
unsigned int var_3 = 137679115U;
signed char var_5 = (signed char)-37;
int var_7 = 1147964288;
unsigned char var_10 = (unsigned char)128;
unsigned int var_13 = 1928801675U;
long long int var_14 = -3942238266799265005LL;
int zero = 0;
short var_17 = (short)6491;
signed char var_18 = (signed char)-54;
unsigned long long int var_19 = 10710422700103775854ULL;
unsigned long long int var_20 = 16741788473418542221ULL;
int var_21 = -1065767677;
signed char var_22 = (signed char)-57;
unsigned char var_23 = (unsigned char)34;
long long int var_24 = 979203405960904483LL;
signed char var_25 = (signed char)98;
unsigned short var_26 = (unsigned short)44423;
unsigned long long int arr_1 [21] ;
int arr_2 [22] [22] ;
unsigned long long int arr_3 [22] [22] ;
signed char arr_4 [22] [22] ;
int arr_7 [22] ;
long long int arr_8 [22] ;
short arr_10 [21] ;
unsigned int arr_5 [22] [22] ;
unsigned char arr_6 [22] [22] ;
long long int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 14730607364268428172ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -1246084204;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 12511004842398071059ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 6202483;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -3384381289088210768LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)21348;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1759043919U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 6661217432949024981LL : 4982570586695068478LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
