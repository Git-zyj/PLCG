#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1517955826;
signed char var_1 = (signed char)86;
unsigned int var_2 = 4186047665U;
int var_3 = -1666774090;
short var_5 = (short)-51;
short var_6 = (short)-22588;
signed char var_7 = (signed char)-38;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-17;
signed char var_12 = (signed char)59;
unsigned char arr_1 [10] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)8697;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
