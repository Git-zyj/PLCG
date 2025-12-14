#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2235133021179873737LL;
unsigned char var_1 = (unsigned char)237;
signed char var_2 = (signed char)82;
signed char var_3 = (signed char)-46;
signed char var_4 = (signed char)-24;
_Bool var_5 = (_Bool)1;
int var_6 = 1627511728;
unsigned char var_8 = (unsigned char)190;
int zero = 0;
unsigned long long int var_10 = 12914513405969863754ULL;
signed char var_11 = (signed char)50;
unsigned int var_12 = 2058500058U;
unsigned long long int var_13 = 18109737163014593301ULL;
long long int var_14 = -7170489083758124426LL;
unsigned char var_15 = (unsigned char)28;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2312496390U;
unsigned char var_18 = (unsigned char)84;
unsigned int var_19 = 1933372723U;
int var_20 = -1288630917;
long long int var_21 = 6006013174239010447LL;
int var_22 = 604883644;
int var_23 = -704699013;
signed char var_24 = (signed char)-98;
int var_25 = 340545693;
short var_26 = (short)-30518;
short var_27 = (short)-18346;
unsigned long long int var_28 = 16749298435165447539ULL;
signed char var_29 = (signed char)-88;
long long int var_30 = 4979180678549657258LL;
int var_31 = 1920545568;
unsigned int var_32 = 1241602710U;
_Bool arr_2 [13] ;
_Bool arr_3 [25] [25] ;
signed char arr_5 [25] [25] [25] ;
unsigned long long int arr_7 [25] ;
short arr_9 [25] ;
unsigned long long int arr_11 [25] ;
unsigned long long int arr_13 [25] [25] ;
unsigned char arr_14 [25] [25] [25] [25] [25] ;
short arr_15 [25] [25] [25] [25] [25] ;
unsigned int arr_16 [25] [25] [25] [25] [25] [25] [25] ;
unsigned int arr_18 [23] [23] ;
unsigned char arr_20 [23] ;
signed char arr_21 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 15072998435656716174ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (short)-15106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 12976925426565581051ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 2107075485412737425ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-1505;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 885348742U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = 2695228266U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)123 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)59;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
