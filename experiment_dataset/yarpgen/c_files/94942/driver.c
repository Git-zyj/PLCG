#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1301075797;
unsigned int var_4 = 3077174950U;
short var_10 = (short)-14906;
unsigned char var_15 = (unsigned char)221;
int zero = 0;
int var_16 = -1593413469;
int var_17 = 1913330389;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
