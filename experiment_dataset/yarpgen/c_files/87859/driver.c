#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1122887695;
unsigned int var_7 = 3240652115U;
unsigned short var_17 = (unsigned short)21181;
int zero = 0;
int var_18 = -201767223;
unsigned short var_19 = (unsigned short)1302;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
