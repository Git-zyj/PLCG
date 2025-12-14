#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
short var_2 = (short)-7452;
signed char var_6 = (signed char)-21;
short var_10 = (short)-27646;
signed char var_13 = (signed char)47;
signed char var_15 = (signed char)100;
int zero = 0;
short var_20 = (short)-4886;
unsigned char var_21 = (unsigned char)72;
short var_22 = (short)-23770;
signed char var_23 = (signed char)87;
unsigned char arr_1 [25] ;
signed char arr_2 [25] ;
short arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-13621;
}

void checksum() {
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
