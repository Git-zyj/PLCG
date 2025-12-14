#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -1840287308;
short var_15 = (short)-23072;
int zero = 0;
short var_20 = (short)31991;
int var_21 = 73329822;
unsigned long long int var_22 = 1269719447603263589ULL;
unsigned short var_23 = (unsigned short)20893;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
