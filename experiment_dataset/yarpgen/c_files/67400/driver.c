#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)79;
unsigned int var_2 = 1306639293U;
unsigned int var_3 = 707864611U;
unsigned int var_6 = 472476782U;
short var_7 = (short)14507;
int var_12 = -1373829868;
int zero = 0;
signed char var_13 = (signed char)6;
unsigned int var_14 = 2367826285U;
short var_15 = (short)21047;
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
