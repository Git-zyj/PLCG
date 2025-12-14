#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
unsigned short var_5 = (unsigned short)14848;
unsigned char var_6 = (unsigned char)236;
unsigned short var_14 = (unsigned short)30038;
signed char var_16 = (signed char)-96;
long long int var_19 = -6541205665003267072LL;
int zero = 0;
unsigned int var_20 = 915821504U;
unsigned char var_21 = (unsigned char)134;
short var_22 = (short)-6470;
int var_23 = -1761535935;
signed char var_24 = (signed char)-118;
signed char var_25 = (signed char)-74;
unsigned int var_26 = 3030174624U;
unsigned char var_27 = (unsigned char)144;
long long int var_28 = 917596154216587267LL;
unsigned int var_29 = 1248957862U;
signed char var_30 = (signed char)-11;
signed char var_31 = (signed char)123;
long long int var_32 = -3991930102779679574LL;
unsigned long long int var_33 = 4497929540735954035ULL;
unsigned int var_34 = 1673875116U;
unsigned char var_35 = (unsigned char)6;
unsigned int var_36 = 4203564994U;
_Bool var_37 = (_Bool)0;
_Bool var_38 = (_Bool)0;
_Bool var_39 = (_Bool)0;
unsigned short var_40 = (unsigned short)39086;
unsigned char var_41 = (unsigned char)141;
short arr_0 [13] ;
short arr_1 [13] ;
short arr_2 [13] ;
int arr_4 [13] [13] ;
signed char arr_5 [13] ;
long long int arr_9 [13] [13] [13] [13] ;
unsigned short arr_10 [13] [13] [13] [13] ;
long long int arr_12 [13] [13] ;
signed char arr_13 [13] [13] [13] [13] [13] ;
unsigned int arr_17 [13] [13] [13] [13] [13] [13] ;
long long int arr_26 [23] ;
_Bool arr_27 [23] [23] ;
unsigned short arr_28 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)12033;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)16764;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)27047;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 588164658;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -8392676074060587398LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4558;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = -6173937536980341066LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3293178816U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? -8072959685549801527LL : -2607206932761362599LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)50518;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
