#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26994;
int var_6 = -964952349;
unsigned long long int var_7 = 5028291635182016534ULL;
unsigned char var_10 = (unsigned char)236;
int var_12 = -2063322091;
int zero = 0;
signed char var_14 = (signed char)22;
short var_15 = (short)7414;
unsigned int var_16 = 288549392U;
short var_17 = (short)-12306;
short var_18 = (short)-22800;
unsigned char arr_0 [21] ;
unsigned short arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10540 : (unsigned short)63883;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
