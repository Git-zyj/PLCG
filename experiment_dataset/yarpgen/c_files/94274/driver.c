#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 622798933;
unsigned long long int var_1 = 8252238075790159414ULL;
int var_2 = 1601066419;
long long int var_4 = -6531709797981305088LL;
unsigned long long int var_6 = 11924213206663233155ULL;
unsigned long long int var_11 = 7158743195368454619ULL;
int zero = 0;
short var_12 = (short)-2895;
int var_13 = 2116895467;
short var_14 = (short)-2400;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
