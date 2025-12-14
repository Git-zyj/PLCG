#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 561472264U;
signed char var_1 = (signed char)94;
signed char var_3 = (signed char)-40;
unsigned long long int var_5 = 8503788005460635700ULL;
long long int var_7 = 2617419080832689988LL;
unsigned int var_9 = 3418396254U;
unsigned char var_10 = (unsigned char)88;
int zero = 0;
unsigned int var_11 = 56561256U;
unsigned short var_12 = (unsigned short)16921;
unsigned int var_13 = 3944878580U;
int var_14 = -1395165391;
short var_15 = (short)-15048;
unsigned int var_16 = 3862163046U;
unsigned char arr_2 [10] ;
short arr_3 [10] ;
long long int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-1413;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 9185468545712837439LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
