#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4172838060808200875LL;
unsigned int var_5 = 3376264638U;
long long int var_6 = -7343500703239232705LL;
unsigned int var_9 = 1852701428U;
int zero = 0;
unsigned short var_10 = (unsigned short)15485;
unsigned long long int var_11 = 744892500785064482ULL;
short var_12 = (short)-17844;
long long int var_13 = -1225989038166079057LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
