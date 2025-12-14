#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7387;
int var_6 = 1941609279;
signed char var_7 = (signed char)42;
unsigned long long int var_8 = 16865847100009113585ULL;
int zero = 0;
signed char var_12 = (signed char)44;
short var_13 = (short)-11464;
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
