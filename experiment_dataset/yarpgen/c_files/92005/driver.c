#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3471554570U;
unsigned char var_2 = (unsigned char)86;
unsigned int var_5 = 1866972470U;
unsigned char var_11 = (unsigned char)107;
unsigned long long int var_13 = 14929726271302113122ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-26334;
long long int var_16 = -4421231932523584141LL;
signed char var_17 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
