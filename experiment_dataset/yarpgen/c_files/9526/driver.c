#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 256361991U;
unsigned int var_6 = 711326145U;
short var_8 = (short)5324;
short var_9 = (short)27312;
unsigned int var_10 = 3903517070U;
short var_11 = (short)21003;
short var_12 = (short)-7459;
unsigned int var_13 = 885682348U;
short var_15 = (short)-12337;
int zero = 0;
unsigned int var_17 = 3401761213U;
unsigned int var_18 = 1848438689U;
unsigned int var_19 = 3086930473U;
unsigned int var_20 = 146381566U;
short var_21 = (short)22510;
short var_22 = (short)2550;
short var_23 = (short)20596;
short arr_0 [25] ;
short arr_2 [25] ;
unsigned int arr_4 [13] [13] ;
short arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)23606;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)21566 : (short)-25793;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 4061311451U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-29642;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
