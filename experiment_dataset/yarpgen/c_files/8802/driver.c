#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29687;
unsigned int var_2 = 1475567607U;
unsigned long long int var_3 = 14796218345833496919ULL;
short var_9 = (short)20761;
int zero = 0;
unsigned int var_10 = 2754951010U;
int var_11 = 372131590;
int var_12 = 1389928794;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
