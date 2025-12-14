#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
int var_4 = -1969516964;
short var_6 = (short)23041;
int zero = 0;
unsigned long long int var_10 = 16216148076313512774ULL;
signed char var_11 = (signed char)4;
unsigned long long int var_12 = 10973597355092431092ULL;
unsigned char var_13 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
