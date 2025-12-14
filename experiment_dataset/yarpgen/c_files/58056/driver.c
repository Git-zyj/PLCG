#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
short var_1 = (short)788;
int var_2 = 1375387264;
short var_9 = (short)6104;
unsigned char var_10 = (unsigned char)220;
short var_14 = (short)30431;
int zero = 0;
int var_16 = 743436401;
signed char var_17 = (signed char)-127;
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
