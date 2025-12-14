#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3322551245U;
unsigned int var_1 = 1666395741U;
unsigned int var_3 = 1191984357U;
unsigned int var_9 = 2168353931U;
unsigned int var_10 = 2371848214U;
unsigned int var_11 = 1195630811U;
unsigned int var_12 = 3782964769U;
unsigned int var_14 = 1471112444U;
unsigned int var_16 = 1419307708U;
int zero = 0;
unsigned int var_19 = 1931644078U;
unsigned int var_20 = 1696951741U;
unsigned int var_21 = 1922506552U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
