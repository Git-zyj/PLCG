#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
signed char var_8 = (signed char)21;
signed char var_9 = (signed char)-71;
int zero = 0;
unsigned int var_13 = 3764849634U;
long long int var_14 = -1870403117657298477LL;
unsigned short var_15 = (unsigned short)29672;
long long int var_16 = 7200307110549264150LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
