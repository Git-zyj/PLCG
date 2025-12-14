#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 86373490;
long long int var_3 = -6554718250891574838LL;
signed char var_8 = (signed char)-78;
int var_9 = 43392456;
int var_12 = -191761991;
int zero = 0;
unsigned int var_15 = 1265813265U;
unsigned int var_16 = 1253066207U;
signed char var_17 = (signed char)25;
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
