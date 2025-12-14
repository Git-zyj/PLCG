#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43843;
short var_1 = (short)-9336;
unsigned long long int var_2 = 984413401993281751ULL;
unsigned short var_9 = (unsigned short)26228;
signed char var_11 = (signed char)9;
int zero = 0;
long long int var_15 = -3246871315964329169LL;
unsigned long long int var_16 = 4882364519328930431ULL;
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
