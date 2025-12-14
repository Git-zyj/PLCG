#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29827;
unsigned int var_1 = 137623612U;
unsigned char var_2 = (unsigned char)97;
unsigned int var_3 = 592054509U;
unsigned short var_5 = (unsigned short)23875;
short var_7 = (short)21672;
unsigned int var_9 = 742407379U;
long long int var_10 = 6351556112365297626LL;
short var_11 = (short)-5063;
int zero = 0;
signed char var_12 = (signed char)-90;
unsigned short var_13 = (unsigned short)24486;
unsigned char var_14 = (unsigned char)110;
long long int var_15 = 6720889170550840617LL;
short var_16 = (short)13499;
unsigned long long int var_17 = 9760148247721766013ULL;
long long int var_18 = -6704507901045918196LL;
signed char var_19 = (signed char)67;
signed char var_20 = (signed char)-22;
unsigned char var_21 = (unsigned char)191;
long long int var_22 = 3436040439736159836LL;
unsigned short var_23 = (unsigned short)13583;
unsigned long long int var_24 = 11979575471940462109ULL;
unsigned short arr_1 [20] [20] ;
short arr_2 [20] ;
unsigned long long int arr_5 [20] [20] [20] ;
short arr_8 [20] ;
signed char arr_9 [20] [20] ;
int arr_10 [20] ;
int arr_11 [20] [20] [20] [20] ;
unsigned char arr_12 [20] [20] ;
unsigned short arr_13 [23] [23] ;
unsigned long long int arr_14 [23] ;
short arr_15 [23] ;
unsigned long long int arr_19 [16] [16] ;
long long int arr_20 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)19935;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)15906;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15741954067896919057ULL : 779011628780912626ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-15234 : (short)30523;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)123 : (signed char)-33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1888761176 : 1815225244;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -1283348538;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)59661;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 16841314519962416086ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (short)-14443;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = 17684912224297231394ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = -5092020439811585278LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
