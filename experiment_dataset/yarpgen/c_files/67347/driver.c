#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1518992755;
unsigned short var_5 = (unsigned short)22094;
unsigned int var_10 = 2067517185U;
int zero = 0;
short var_13 = (short)32057;
unsigned long long int var_14 = 6571969753885250125ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
