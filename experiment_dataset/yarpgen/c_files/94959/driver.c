#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64316;
long long int var_2 = -2218041369785584080LL;
unsigned int var_3 = 1972905877U;
signed char var_4 = (signed char)107;
int var_5 = -97314375;
long long int var_6 = 1266272702122091525LL;
unsigned short var_9 = (unsigned short)48631;
int zero = 0;
unsigned long long int var_10 = 15149859752835532908ULL;
int var_11 = -122767473;
unsigned int var_12 = 2157949501U;
unsigned char var_13 = (unsigned char)199;
unsigned char var_14 = (unsigned char)155;
unsigned char var_15 = (unsigned char)91;
long long int var_16 = -1086599409605861710LL;
unsigned char var_17 = (unsigned char)156;
short var_18 = (short)-23045;
long long int var_19 = -4514690499448281452LL;
unsigned long long int var_20 = 5516262624806175598ULL;
unsigned long long int var_21 = 160840365940241297ULL;
unsigned long long int arr_0 [25] ;
_Bool arr_1 [25] [25] ;
int arr_6 [25] [25] ;
unsigned long long int arr_10 [25] ;
int arr_11 [25] [25] [25] [25] ;
unsigned char arr_12 [25] [25] [25] ;
_Bool arr_8 [25] [25] ;
unsigned short arr_15 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 8402134637801813237ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 274174273;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 558134294655272937ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -166257768;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)43842;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
