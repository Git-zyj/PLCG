#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1820769030U;
unsigned long long int var_7 = 9001115760719056349ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)181;
unsigned long long int var_14 = 10299067872376000391ULL;
unsigned int var_15 = 3997271818U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
