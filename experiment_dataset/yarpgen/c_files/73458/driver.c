#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7938;
unsigned long long int var_4 = 4642087255800418813ULL;
int var_5 = -376491418;
signed char var_6 = (signed char)96;
unsigned int var_7 = 3198701645U;
unsigned int var_8 = 952008569U;
int zero = 0;
int var_11 = 915525601;
int var_12 = -1681938861;
int var_13 = 991056541;
long long int var_14 = -86509161704815596LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)36;
long long int var_17 = 1541873029990149969LL;
long long int var_18 = 8491182306760208564LL;
unsigned int var_19 = 4197256052U;
unsigned long long int var_20 = 3264607176867639999ULL;
int var_21 = 965352961;
unsigned short var_22 = (unsigned short)65197;
int var_23 = -911583721;
_Bool var_24 = (_Bool)1;
short var_25 = (short)32657;
unsigned int var_26 = 1826541635U;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 3763048901U;
long long int var_29 = 3591594911300978053LL;
long long int arr_1 [18] ;
int arr_2 [18] [18] ;
short arr_4 [22] [22] ;
signed char arr_5 [22] ;
short arr_6 [22] [22] ;
unsigned long long int arr_7 [20] ;
unsigned short arr_8 [20] ;
unsigned char arr_18 [20] [20] [20] [20] [20] [20] ;
unsigned char arr_24 [20] [20] [20] [20] ;
long long int arr_25 [20] [20] [20] [20] [20] ;
long long int arr_27 [20] [20] [20] ;
unsigned long long int arr_3 [18] ;
unsigned short arr_28 [20] ;
int arr_29 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 8854435466026316084LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 1611004669;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-11736;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-2795;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1869974868869348929ULL : 11434836075806914258ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)12516;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)176 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 5965859295466049081LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2684946419942665456LL : 8589069323608288235LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 5250533646606411423ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45879 : (unsigned short)47839;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? 1771849954 : 1951305506;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
