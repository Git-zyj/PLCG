#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47875;
unsigned char var_2 = (unsigned char)64;
unsigned short var_3 = (unsigned short)59126;
unsigned short var_4 = (unsigned short)2987;
long long int var_7 = 4668381269013826372LL;
unsigned short var_8 = (unsigned short)64628;
int var_9 = 1037333653;
_Bool var_10 = (_Bool)1;
int var_11 = -196605844;
long long int var_12 = -1768985495982250728LL;
unsigned long long int var_14 = 8156955332838442451ULL;
unsigned short var_15 = (unsigned short)21845;
int var_18 = 1892354746;
int zero = 0;
signed char var_19 = (signed char)-40;
signed char var_20 = (signed char)96;
unsigned short var_21 = (unsigned short)49682;
unsigned short var_22 = (unsigned short)2034;
signed char var_23 = (signed char)-43;
signed char var_24 = (signed char)77;
signed char var_25 = (signed char)96;
int var_26 = -505621409;
long long int var_27 = -354415294284901089LL;
unsigned short var_28 = (unsigned short)17963;
unsigned short var_29 = (unsigned short)4723;
unsigned char var_30 = (unsigned char)203;
int var_31 = 1572334670;
int var_32 = -1379452088;
signed char var_33 = (signed char)-37;
unsigned char var_34 = (unsigned char)239;
_Bool var_35 = (_Bool)1;
unsigned short arr_0 [18] ;
int arr_1 [18] ;
signed char arr_4 [18] ;
signed char arr_7 [22] ;
_Bool arr_10 [18] ;
signed char arr_13 [18] [18] ;
int arr_15 [18] [18] [18] ;
unsigned short arr_19 [18] ;
signed char arr_21 [18] [18] ;
int arr_5 [18] [18] [18] ;
unsigned char arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)36929;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 828720409;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -2146931437;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned short)34966;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2123330274;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)122;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
