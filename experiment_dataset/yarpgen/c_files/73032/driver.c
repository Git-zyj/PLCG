#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
int var_2 = -213715790;
short var_4 = (short)-25361;
int var_5 = 995116800;
short var_6 = (short)-4932;
unsigned char var_7 = (unsigned char)26;
unsigned long long int var_8 = 17981578286370093642ULL;
long long int var_10 = -7781298988964110376LL;
unsigned char var_11 = (unsigned char)198;
signed char var_12 = (signed char)-5;
short var_14 = (short)15427;
signed char var_15 = (signed char)-118;
int zero = 0;
signed char var_16 = (signed char)73;
signed char var_17 = (signed char)-125;
signed char var_18 = (signed char)-16;
unsigned char var_19 = (unsigned char)242;
long long int var_20 = -8389441328096441851LL;
unsigned char var_21 = (unsigned char)72;
long long int var_22 = -6194864841999183936LL;
unsigned char var_23 = (unsigned char)74;
unsigned char arr_0 [10] [10] ;
int arr_2 [10] [10] ;
signed char arr_3 [10] [10] [10] ;
unsigned char arr_5 [10] [10] [10] ;
unsigned long long int arr_6 [10] [10] [10] ;
unsigned char arr_10 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -70931640;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-93 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 7453252595783926098ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)118 : (unsigned char)248;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
