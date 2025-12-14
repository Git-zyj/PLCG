#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)4953;
unsigned long long int var_8 = 8763180608295092825ULL;
short var_9 = (short)31634;
signed char var_11 = (signed char)-31;
signed char var_13 = (signed char)44;
int zero = 0;
signed char var_17 = (signed char)113;
short var_18 = (short)-30494;
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
