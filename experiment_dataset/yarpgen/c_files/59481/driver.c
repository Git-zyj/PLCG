#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11050014956127994537ULL;
unsigned int var_4 = 993825533U;
unsigned int var_7 = 1183626936U;
int zero = 0;
short var_14 = (short)-24323;
unsigned long long int var_15 = 14248132916225125883ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
