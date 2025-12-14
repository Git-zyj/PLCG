#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4623928907195650847ULL;
unsigned int var_5 = 2183338388U;
unsigned long long int var_6 = 10057034989961074762ULL;
short var_12 = (short)-12721;
unsigned char var_14 = (unsigned char)21;
unsigned int var_15 = 1694432402U;
int zero = 0;
signed char var_20 = (signed char)-22;
unsigned int var_21 = 3163965344U;
signed char var_22 = (signed char)2;
unsigned char var_23 = (unsigned char)58;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)32190;
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
