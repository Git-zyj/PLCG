#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13649;
unsigned short var_2 = (unsigned short)35906;
unsigned short var_8 = (unsigned short)7332;
int zero = 0;
unsigned long long int var_20 = 12310160293353248138ULL;
short var_21 = (short)21627;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
