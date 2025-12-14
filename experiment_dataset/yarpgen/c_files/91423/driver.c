#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -80554405;
unsigned long long int var_8 = 14195609186314358541ULL;
signed char var_10 = (signed char)110;
short var_11 = (short)-19111;
int zero = 0;
short var_13 = (short)22613;
long long int var_14 = -7007982947470350964LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
