#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1125659886U;
signed char var_1 = (signed char)42;
unsigned int var_3 = 79911740U;
unsigned int var_4 = 2690589782U;
unsigned int var_8 = 1711997932U;
unsigned long long int var_10 = 15585948128468789306ULL;
signed char var_11 = (signed char)-49;
long long int var_13 = -4744829120858621203LL;
signed char var_14 = (signed char)-1;
signed char var_15 = (signed char)-15;
unsigned char var_16 = (unsigned char)25;
unsigned char var_17 = (unsigned char)237;
int zero = 0;
unsigned int var_19 = 629259018U;
unsigned long long int var_20 = 4642913450960768427ULL;
short var_21 = (short)-18189;
unsigned short var_22 = (unsigned short)59086;
unsigned long long int var_23 = 8478835598414007644ULL;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 1193577125U;
long long int var_26 = -2339272478871842587LL;
short var_27 = (short)20055;
unsigned int arr_0 [22] [22] ;
int arr_4 [22] [22] ;
_Bool arr_5 [22] ;
signed char arr_7 [22] [22] [22] ;
unsigned long long int arr_8 [22] [22] [22] ;
unsigned long long int arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 3438865785U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -1004716409;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 469945759226719491ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 17549577200244765441ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
