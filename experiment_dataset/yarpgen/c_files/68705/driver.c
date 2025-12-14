#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3834364304759336485LL;
unsigned int var_1 = 2321895971U;
unsigned short var_3 = (unsigned short)21294;
int var_4 = -456702459;
short var_5 = (short)-19245;
unsigned short var_6 = (unsigned short)12616;
short var_7 = (short)-3521;
unsigned short var_9 = (unsigned short)42669;
signed char var_10 = (signed char)-61;
signed char var_11 = (signed char)-77;
unsigned short var_12 = (unsigned short)59364;
int zero = 0;
unsigned char var_13 = (unsigned char)15;
unsigned char var_14 = (unsigned char)246;
short var_15 = (short)-27647;
int var_16 = 54820351;
short var_17 = (short)-9604;
signed char var_18 = (signed char)-109;
short var_19 = (short)19670;
int var_20 = 1692639074;
signed char var_21 = (signed char)-81;
unsigned int var_22 = 281839286U;
unsigned long long int var_23 = 5514385232276938931ULL;
short var_24 = (short)29492;
long long int var_25 = 9118340566499445737LL;
long long int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned int arr_2 [16] ;
unsigned short arr_6 [16] [16] [16] [16] ;
_Bool arr_11 [16] [16] [16] [16] [16] ;
_Bool arr_14 [16] [16] [16] [16] [16] ;
short arr_19 [16] ;
short arr_24 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -7879871281603853456LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 7521655920435306518ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2477528945U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)38909;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)-10218 : (short)-15000;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (short)-10158 : (short)-29879;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
