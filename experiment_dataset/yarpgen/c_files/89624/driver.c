#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-10;
unsigned int var_4 = 1740781494U;
unsigned int var_14 = 1645381588U;
int zero = 0;
long long int var_16 = 6772394404033836196LL;
long long int var_17 = -591538799379558650LL;
short var_18 = (short)-19738;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
