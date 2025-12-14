#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -676793830;
unsigned char var_4 = (unsigned char)203;
signed char var_5 = (signed char)87;
short var_7 = (short)-16700;
unsigned long long int var_8 = 7469449013022354919ULL;
unsigned char var_9 = (unsigned char)187;
int var_11 = 1287189786;
int zero = 0;
unsigned char var_14 = (unsigned char)164;
short var_15 = (short)-32511;
unsigned char var_16 = (unsigned char)12;
unsigned long long int var_17 = 4879516688877071067ULL;
int var_18 = -1277008099;
unsigned char var_19 = (unsigned char)168;
signed char var_20 = (signed char)-61;
short arr_0 [18] ;
short arr_1 [18] ;
short arr_2 [18] [18] ;
unsigned long long int arr_3 [21] ;
unsigned char arr_5 [21] [21] ;
unsigned char arr_9 [21] ;
int arr_7 [21] ;
unsigned char arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-29723;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-3964;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-32740;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 8469579615585530375ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1630340639 : -1192515830;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)146 : (unsigned char)133;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
