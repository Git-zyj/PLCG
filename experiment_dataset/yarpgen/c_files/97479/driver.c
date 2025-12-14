#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-100;
short var_7 = (short)-645;
int var_9 = 2088425166;
signed char var_14 = (signed char)41;
signed char var_15 = (signed char)120;
int var_16 = 229042847;
int zero = 0;
int var_17 = 1138814036;
int var_18 = 1704667424;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
