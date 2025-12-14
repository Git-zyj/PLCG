#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32444;
short var_4 = (short)1136;
short var_8 = (short)-16402;
unsigned char var_13 = (unsigned char)68;
short var_14 = (short)-20700;
int zero = 0;
short var_18 = (short)331;
short var_19 = (short)-16118;
unsigned char var_20 = (unsigned char)32;
unsigned long long int var_21 = 13332877987041597592ULL;
short var_22 = (short)-10269;
unsigned long long int var_23 = 7870282403262210590ULL;
short var_24 = (short)-26230;
short arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)27162;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)21;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
