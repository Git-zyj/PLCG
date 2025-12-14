#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1782396187;
unsigned short var_2 = (unsigned short)34581;
unsigned short var_3 = (unsigned short)46552;
short var_17 = (short)29892;
int zero = 0;
unsigned long long int var_18 = 8175748799481028450ULL;
int var_19 = 1261956282;
short var_20 = (short)25371;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
