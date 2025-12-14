#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16849;
signed char var_7 = (signed char)90;
int var_9 = -952691849;
short var_10 = (short)-332;
unsigned int var_13 = 60234335U;
int zero = 0;
int var_14 = 1224951912;
int var_15 = 82791546;
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
