#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 296614582U;
_Bool var_1 = (_Bool)0;
int var_2 = 128657275;
signed char var_4 = (signed char)27;
unsigned short var_6 = (unsigned short)27686;
int var_9 = -2022139765;
long long int var_12 = 4863422809174647924LL;
int zero = 0;
unsigned long long int var_15 = 10608929918424393896ULL;
short var_16 = (short)7167;
short var_17 = (short)-7177;
void init() {
}

void checksum() {
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
