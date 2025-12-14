#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1693464409;
unsigned int var_1 = 1264233844U;
unsigned short var_2 = (unsigned short)4064;
unsigned long long int var_3 = 17592504739662725305ULL;
unsigned int var_4 = 398454413U;
long long int var_6 = 3894072772387285452LL;
signed char var_7 = (signed char)38;
unsigned long long int var_8 = 13913451212359813292ULL;
unsigned long long int var_11 = 12960714085209052697ULL;
unsigned int var_12 = 4194619302U;
signed char var_13 = (signed char)-58;
unsigned char var_14 = (unsigned char)97;
int zero = 0;
unsigned long long int var_15 = 13974173584726904931ULL;
unsigned long long int var_16 = 10461252132669374361ULL;
unsigned int var_17 = 3004973739U;
unsigned int var_18 = 1720511983U;
unsigned short var_19 = (unsigned short)12865;
short var_20 = (short)-12186;
unsigned int var_21 = 1562722615U;
unsigned long long int var_22 = 4805400884887739631ULL;
long long int var_23 = 6121196000150459990LL;
unsigned long long int var_24 = 9046930925574079328ULL;
unsigned char var_25 = (unsigned char)198;
signed char var_26 = (signed char)45;
unsigned long long int var_27 = 12842988931746648243ULL;
unsigned short arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
unsigned short arr_2 [15] ;
unsigned char arr_3 [15] ;
signed char arr_4 [15] [15] [15] ;
unsigned long long int arr_7 [15] [15] [15] [15] ;
unsigned int arr_9 [15] [15] ;
unsigned short arr_11 [15] [15] ;
unsigned long long int arr_16 [15] [15] [15] ;
unsigned int arr_19 [15] [15] [15] [15] ;
unsigned short arr_6 [15] ;
unsigned int arr_14 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)21794;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 11883423727838210774ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)37343;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2591811063517530628ULL : 16590456529704956343ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 3173716850U : 2411697887U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49121 : (unsigned short)27843;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 16114097239170410093ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3347851358U : 500622799U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)36849;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3577158268U : 2211370000U;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
