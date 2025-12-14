#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1258336776;
unsigned int var_2 = 1430668274U;
signed char var_3 = (signed char)-76;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 228572338U;
unsigned long long int var_9 = 9923550676666834940ULL;
int zero = 0;
short var_14 = (short)-14788;
unsigned char var_15 = (unsigned char)79;
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
