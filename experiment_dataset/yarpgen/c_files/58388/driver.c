#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
long long int var_6 = 7198172052287610256LL;
signed char var_11 = (signed char)-26;
unsigned long long int var_12 = 1519237809444307089ULL;
long long int var_16 = -1550477732844182572LL;
int zero = 0;
unsigned char var_17 = (unsigned char)135;
unsigned int var_18 = 3519098424U;
int var_19 = -344219299;
unsigned long long int var_20 = 374857130721530248ULL;
unsigned int var_21 = 4043992583U;
unsigned int var_22 = 3779994280U;
int var_23 = 863503515;
int var_24 = 933527230;
unsigned char var_25 = (unsigned char)130;
unsigned char var_26 = (unsigned char)141;
long long int var_27 = -9188309575269854595LL;
unsigned int var_28 = 3865749015U;
unsigned int var_29 = 3689713327U;
unsigned int arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned char arr_17 [22] ;
int arr_18 [22] ;
int arr_23 [17] ;
unsigned short arr_4 [11] ;
unsigned short arr_5 [11] [11] ;
unsigned long long int arr_9 [11] ;
unsigned int arr_16 [11] ;
unsigned short arr_19 [22] ;
signed char arr_26 [17] ;
signed char arr_29 [17] [17] [17] ;
unsigned int arr_30 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2456101874U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = -864428683;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? -1478882667 : 1658904743;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)9280;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)3291;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 614165672479663245ULL : 14966451081206681172ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 432364261U : 2021773756U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (unsigned short)28028;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (signed char)113 : (signed char)127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-66 : (signed char)-65;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 166362243U : 253362611U;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
