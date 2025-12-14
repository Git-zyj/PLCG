#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2451432902U;
signed char var_3 = (signed char)66;
signed char var_4 = (signed char)2;
unsigned short var_7 = (unsigned short)7578;
int var_8 = -917421679;
unsigned int var_9 = 2973177737U;
short var_10 = (short)21617;
unsigned int var_11 = 1699459925U;
int zero = 0;
unsigned short var_12 = (unsigned short)38304;
int var_13 = 754442097;
unsigned short var_14 = (unsigned short)9381;
int var_15 = 820592331;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
