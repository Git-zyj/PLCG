#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1932525412;
unsigned long long int var_2 = 13697752193216136440ULL;
unsigned long long int var_3 = 5693732070672080681ULL;
short var_4 = (short)-5600;
int var_5 = 176244148;
unsigned short var_7 = (unsigned short)42134;
unsigned char var_8 = (unsigned char)10;
unsigned char var_9 = (unsigned char)165;
unsigned long long int var_10 = 18170763177744945866ULL;
signed char var_11 = (signed char)-4;
int zero = 0;
int var_13 = -517504015;
long long int var_14 = -9090178648088768344LL;
long long int var_15 = 9043079398233589853LL;
long long int var_16 = 4567234984421969306LL;
short var_17 = (short)29154;
signed char var_18 = (signed char)107;
unsigned short var_19 = (unsigned short)41520;
signed char var_20 = (signed char)81;
short var_21 = (short)15442;
int var_22 = 1165164271;
long long int var_23 = -2496513024038657431LL;
unsigned char var_24 = (unsigned char)160;
short var_25 = (short)-14424;
signed char var_26 = (signed char)-62;
signed char var_27 = (signed char)83;
signed char var_28 = (signed char)-42;
long long int var_29 = -2792016914495258208LL;
long long int var_30 = 1112598432996871450LL;
long long int var_31 = -36898372955994073LL;
signed char var_32 = (signed char)66;
signed char var_33 = (signed char)85;
unsigned int var_34 = 275121376U;
signed char var_35 = (signed char)115;
_Bool arr_4 [13] ;
unsigned char arr_7 [13] [13] ;
unsigned long long int arr_13 [23] ;
short arr_14 [23] [23] ;
int arr_15 [23] ;
signed char arr_16 [23] [23] [23] ;
long long int arr_18 [23] [23] ;
unsigned long long int arr_19 [23] [23] [23] [23] ;
signed char arr_20 [23] [23] [23] [23] ;
signed char arr_23 [23] [23] ;
unsigned int arr_24 [23] [23] ;
_Bool arr_25 [23] ;
unsigned char arr_26 [23] ;
long long int arr_27 [23] ;
unsigned short arr_29 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 3789604097638136197ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-4877;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 1545759963;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = 8661226026693981748LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 9231123534732090769ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)116 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = 2996519745U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = 5372698705482159662LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (unsigned short)6124;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
