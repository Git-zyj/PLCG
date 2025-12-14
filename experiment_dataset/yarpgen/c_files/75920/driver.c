#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-5;
unsigned long long int var_9 = 18046744197049392016ULL;
signed char var_13 = (signed char)-77;
short var_15 = (short)-26365;
int zero = 0;
unsigned long long int var_16 = 11153418514021959325ULL;
unsigned long long int var_17 = 244002897424319858ULL;
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
