#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5458094684966809538LL;
signed char var_9 = (signed char)52;
unsigned long long int var_17 = 2341214640604586501ULL;
int zero = 0;
unsigned int var_20 = 2207162137U;
signed char var_21 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
