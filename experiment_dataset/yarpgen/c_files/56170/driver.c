#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4125366303U;
unsigned char var_4 = (unsigned char)31;
unsigned short var_5 = (unsigned short)60303;
unsigned char var_7 = (unsigned char)110;
_Bool var_10 = (_Bool)1;
long long int var_11 = -7645578791870277194LL;
unsigned char var_12 = (unsigned char)221;
unsigned int var_13 = 1317326168U;
unsigned char var_14 = (unsigned char)225;
long long int var_15 = 5212601329942495333LL;
signed char var_16 = (signed char)4;
int zero = 0;
signed char var_18 = (signed char)-8;
long long int var_19 = 4063158161215024258LL;
long long int var_20 = 2711448025932664353LL;
signed char var_21 = (signed char)101;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-37;
int var_24 = -2105036035;
unsigned long long int var_25 = 13087182340099345563ULL;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-127;
long long int var_28 = 6424255836730995235LL;
unsigned long long int var_29 = 3159692579179924604ULL;
int arr_4 [24] [24] ;
signed char arr_13 [24] ;
unsigned short arr_23 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1631347059;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)35 : (signed char)-76;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (unsigned short)48162;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
