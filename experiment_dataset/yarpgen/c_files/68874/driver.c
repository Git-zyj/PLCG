#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
signed char var_7 = (signed char)83;
short var_8 = (short)24754;
short var_9 = (short)20668;
short var_10 = (short)-5366;
signed char var_11 = (signed char)-37;
int zero = 0;
short var_20 = (short)-6683;
short var_21 = (short)-721;
short var_22 = (short)12472;
signed char var_23 = (signed char)-31;
signed char var_24 = (signed char)96;
signed char arr_1 [18] ;
signed char arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-117;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
