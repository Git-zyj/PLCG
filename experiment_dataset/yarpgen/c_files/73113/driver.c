#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4520183152357701492LL;
unsigned int var_2 = 590929522U;
short var_3 = (short)17743;
unsigned char var_4 = (unsigned char)75;
signed char var_5 = (signed char)-6;
long long int var_7 = 6965006030881359212LL;
unsigned short var_8 = (unsigned short)55594;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 376269658U;
unsigned char var_11 = (unsigned char)223;
unsigned int var_12 = 1767575311U;
unsigned short var_13 = (unsigned short)50562;
signed char var_14 = (signed char)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1053400530U;
signed char var_18 = (signed char)-2;
unsigned char var_19 = (unsigned char)226;
unsigned char var_20 = (unsigned char)179;
short var_21 = (short)-17088;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 5757216839363216296ULL;
unsigned int var_24 = 2158549371U;
int var_25 = 876722893;
int var_26 = -78080889;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)-114;
unsigned char var_29 = (unsigned char)124;
int arr_0 [21] ;
long long int arr_2 [21] [21] [21] ;
unsigned int arr_3 [21] ;
long long int arr_4 [21] ;
unsigned int arr_5 [21] ;
unsigned long long int arr_8 [21] [21] [21] ;
signed char arr_10 [21] [21] [21] ;
int arr_14 [21] [21] ;
signed char arr_15 [21] ;
short arr_22 [21] [21] [21] ;
unsigned long long int arr_31 [21] [21] ;
unsigned char arr_6 [21] [21] ;
int arr_7 [21] ;
short arr_17 [21] [21] ;
unsigned int arr_21 [21] [21] [21] ;
unsigned int arr_28 [21] [21] [21] [21] [21] ;
unsigned int arr_29 [21] ;
unsigned short arr_33 [21] ;
int arr_34 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1271029365;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1481111954090898461LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 211051922U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 239236936155958814LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 818873037U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2663137872082225815ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = 1131246625;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (short)-16593;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_31 [i_0] [i_1] = 3158999835919052130ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 485978675;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (short)6132;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 1667952323U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = 3862603144U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = 1342576719U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = (unsigned short)39520;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_34 [i_0] [i_1] = 372682243;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
