#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6879;
unsigned short var_1 = (unsigned short)19775;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-113;
unsigned int var_4 = 2026366683U;
signed char var_5 = (signed char)-110;
unsigned int var_7 = 4023066179U;
unsigned int var_8 = 2525357096U;
signed char var_9 = (signed char)5;
unsigned long long int var_10 = 8818251847122496379ULL;
int zero = 0;
int var_12 = -1079400876;
signed char var_13 = (signed char)-18;
unsigned short var_14 = (unsigned short)53250;
unsigned char var_15 = (unsigned char)25;
unsigned long long int var_16 = 10861996207463070878ULL;
unsigned short var_17 = (unsigned short)44412;
unsigned short var_18 = (unsigned short)59736;
int var_19 = -50666193;
unsigned short var_20 = (unsigned short)44579;
unsigned char var_21 = (unsigned char)96;
unsigned short var_22 = (unsigned short)51491;
long long int var_23 = -6510801183460525711LL;
unsigned char var_24 = (unsigned char)69;
int var_25 = 181736305;
unsigned long long int var_26 = 429939743729526456ULL;
unsigned short var_27 = (unsigned short)35207;
short arr_0 [15] ;
signed char arr_2 [15] [15] ;
unsigned char arr_3 [15] [15] ;
signed char arr_6 [15] [15] ;
unsigned int arr_8 [15] [15] ;
signed char arr_9 [15] [15] [15] ;
unsigned short arr_10 [15] [15] [15] ;
short arr_12 [15] ;
int arr_13 [15] [15] ;
unsigned short arr_14 [15] ;
unsigned short arr_15 [15] [15] ;
unsigned int arr_19 [15] [15] [15] [15] ;
unsigned short arr_22 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)32379 : (short)20257;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-58 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)17 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 3471065972U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)32251 : (unsigned short)10107;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-32124 : (short)-3290;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? -1132079 : 2120898482;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (unsigned short)22595;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)62745;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1441675059U : 1275868750U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44099 : (unsigned short)44642;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
