#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1573029503;
int var_9 = -2053450594;
int var_11 = -957748110;
unsigned int var_12 = 3458492612U;
unsigned int var_15 = 189916713U;
int zero = 0;
unsigned short var_16 = (unsigned short)6360;
unsigned short var_17 = (unsigned short)8385;
short var_18 = (short)16338;
short var_19 = (short)9438;
int arr_0 [13] ;
int arr_2 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 128397186;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1530029383;
}

void checksum() {
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
