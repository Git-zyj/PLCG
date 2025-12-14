#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1509905508U;
int var_2 = -763019983;
unsigned int var_4 = 1702652084U;
unsigned char var_6 = (unsigned char)131;
unsigned int var_13 = 2968849296U;
int zero = 0;
short var_14 = (short)-11573;
unsigned int var_15 = 2692169583U;
unsigned int var_16 = 3989354231U;
unsigned short var_17 = (unsigned short)4969;
unsigned char var_18 = (unsigned char)161;
unsigned long long int var_19 = 3646120889218737557ULL;
int var_20 = -1454666195;
int var_21 = -1125985960;
unsigned long long int var_22 = 17873449394006143824ULL;
int arr_0 [14] ;
signed char arr_2 [14] ;
_Bool arr_4 [15] ;
int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -2009769794;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 1899332653;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
