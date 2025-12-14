#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
unsigned long long int var_5 = 9543657808304476129ULL;
signed char var_12 = (signed char)33;
short var_15 = (short)20119;
int zero = 0;
short var_17 = (short)25454;
unsigned long long int var_18 = 2087302016615984411ULL;
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
