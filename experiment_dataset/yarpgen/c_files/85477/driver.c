#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)246;
short var_2 = (short)1215;
unsigned char var_3 = (unsigned char)254;
long long int var_4 = -5635235637071288758LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 4041216241U;
_Bool var_10 = (_Bool)0;
short var_12 = (short)7461;
_Bool var_13 = (_Bool)1;
short var_15 = (short)-7022;
int zero = 0;
unsigned int var_16 = 3667264959U;
long long int var_17 = -5581636254891716116LL;
long long int var_18 = -4927213657402123596LL;
unsigned char var_19 = (unsigned char)130;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)137;
unsigned long long int var_22 = 3445482119271559815ULL;
unsigned int var_23 = 82126405U;
short var_24 = (short)3045;
unsigned int var_25 = 1803732841U;
long long int var_26 = 2924625902157217120LL;
unsigned short var_27 = (unsigned short)31300;
unsigned char var_28 = (unsigned char)116;
unsigned short arr_0 [14] ;
int arr_1 [14] [14] ;
long long int arr_2 [14] ;
unsigned char arr_4 [14] [14] [14] ;
long long int arr_6 [14] [14] ;
unsigned short arr_7 [14] ;
short arr_8 [14] [14] [14] [14] [14] ;
unsigned char arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)59212;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -298087178;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 6284971519041816770LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 5797361090947868876LL : -7666720847139916178LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39717 : (unsigned short)21452;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)6492;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (unsigned char)197;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
