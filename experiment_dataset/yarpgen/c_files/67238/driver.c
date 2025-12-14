#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20915;
unsigned long long int var_4 = 16344689761417162902ULL;
unsigned short var_5 = (unsigned short)21921;
signed char var_6 = (signed char)107;
unsigned short var_9 = (unsigned short)10824;
int zero = 0;
int var_11 = -1833043419;
short var_12 = (short)24561;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
