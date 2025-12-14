#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2310345647U;
long long int var_2 = 7605449643441836266LL;
unsigned char var_3 = (unsigned char)118;
int var_7 = 526633946;
_Bool var_9 = (_Bool)0;
unsigned char var_13 = (unsigned char)47;
unsigned int var_14 = 245153685U;
unsigned short var_15 = (unsigned short)19614;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_19 = 1302439449;
long long int var_20 = 4041522980008303698LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2610513677U;
unsigned char var_23 = (unsigned char)159;
_Bool var_24 = (_Bool)1;
long long int var_25 = 3956260616515429774LL;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-10223;
unsigned int var_28 = 4221531598U;
unsigned char var_29 = (unsigned char)236;
long long int var_30 = -8913995967173273255LL;
int var_31 = 1854416176;
short var_32 = (short)-9141;
unsigned char arr_2 [11] [11] ;
int arr_5 [16] ;
int arr_14 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)70 : (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 988944113;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -218584130;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
