#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26207;
int var_7 = -1757385343;
int var_8 = -1250287009;
short var_9 = (short)16329;
int zero = 0;
long long int var_12 = 1654994515192741444LL;
signed char var_13 = (signed char)-65;
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
