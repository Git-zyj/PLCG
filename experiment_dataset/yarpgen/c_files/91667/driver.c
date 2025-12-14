#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5938;
short var_1 = (short)16825;
short var_5 = (short)-18318;
short var_6 = (short)-23681;
signed char var_8 = (signed char)32;
signed char var_9 = (signed char)-126;
short var_11 = (short)2751;
int zero = 0;
short var_13 = (short)-10265;
signed char var_14 = (signed char)-88;
short var_15 = (short)6977;
short var_16 = (short)-26165;
short var_17 = (short)10652;
short var_18 = (short)17495;
short var_19 = (short)8373;
short arr_7 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)610;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
