#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)37847;
unsigned short var_8 = (unsigned short)15469;
unsigned short var_9 = (unsigned short)39445;
unsigned int var_10 = 1051367169U;
int zero = 0;
short var_12 = (short)25941;
unsigned int var_13 = 1289715364U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
