#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4619510792432554685LL;
int var_6 = -619233307;
unsigned int var_11 = 1926743148U;
unsigned long long int var_12 = 17331048161763434664ULL;
int zero = 0;
int var_15 = 68563635;
short var_16 = (short)-30314;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
