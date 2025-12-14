#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6506552069198260337LL;
long long int var_1 = 1218612125837890655LL;
long long int var_2 = 1431362616584076665LL;
short var_3 = (short)25889;
short var_4 = (short)17656;
long long int var_5 = 2482715267800306589LL;
long long int var_6 = -3007903840814985390LL;
short var_7 = (short)7784;
long long int var_8 = -1121982355906058783LL;
short var_9 = (short)27055;
short var_10 = (short)-12790;
long long int var_11 = 3897844106641982394LL;
short var_12 = (short)26904;
int zero = 0;
long long int var_13 = 3587623152257198828LL;
short var_14 = (short)-28032;
short var_15 = (short)29030;
short var_16 = (short)-9544;
long long int var_17 = 4110950789239753373LL;
short var_18 = (short)-469;
short arr_0 [10] ;
long long int arr_1 [10] ;
short arr_2 [10] ;
long long int arr_3 [10] ;
short arr_6 [25] ;
long long int arr_7 [25] ;
short arr_4 [10] ;
short arr_5 [10] [10] ;
short arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-8571;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -2006030199469187663LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-27607;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -7328623037111377598LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)-3339;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 3482277078594318135LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)32663;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)25238;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-14169;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
