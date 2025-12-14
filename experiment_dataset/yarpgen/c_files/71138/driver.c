#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 853726045U;
signed char var_3 = (signed char)57;
signed char var_4 = (signed char)-99;
unsigned short var_8 = (unsigned short)40022;
int var_10 = -1566759309;
unsigned int var_13 = 1003365909U;
signed char var_17 = (signed char)22;
int zero = 0;
unsigned long long int var_18 = 16227759412652186458ULL;
short var_19 = (short)-15356;
unsigned int var_20 = 3558875319U;
signed char var_21 = (signed char)123;
unsigned int var_22 = 461447480U;
unsigned long long int var_23 = 18157972845383509305ULL;
unsigned short var_24 = (unsigned short)4021;
signed char var_25 = (signed char)-44;
unsigned int var_26 = 3519599045U;
signed char var_27 = (signed char)66;
short var_28 = (short)10194;
unsigned int var_29 = 971304001U;
unsigned int var_30 = 1211092047U;
int var_31 = -2132657537;
signed char arr_1 [12] ;
short arr_2 [12] ;
signed char arr_7 [12] [12] ;
int arr_16 [15] [15] [15] [15] ;
signed char arr_11 [12] [12] ;
signed char arr_20 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-32000;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -964521210;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)58 : (signed char)23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-79 : (signed char)-124;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
