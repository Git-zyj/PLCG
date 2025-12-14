#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_14 = (unsigned char)49;
unsigned int var_16 = 3631624201U;
long long int var_18 = 104703086230614622LL;
int zero = 0;
short var_19 = (short)-9407;
long long int var_20 = -5749758849869774191LL;
int var_21 = 277381021;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
