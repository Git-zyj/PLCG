#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17446916978328394193ULL;
unsigned int var_1 = 404516432U;
unsigned char var_3 = (unsigned char)13;
unsigned char var_5 = (unsigned char)204;
unsigned int var_9 = 3504451086U;
unsigned long long int var_12 = 15721462307993518779ULL;
int zero = 0;
int var_18 = -999625309;
int var_19 = -1560855775;
int var_20 = -433283167;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
