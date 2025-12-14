#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6941437619359168975LL;
short var_2 = (short)-12052;
short var_3 = (short)23834;
unsigned int var_5 = 3080797845U;
unsigned int var_7 = 1628927082U;
int zero = 0;
unsigned char var_13 = (unsigned char)223;
long long int var_14 = 1553952156098258378LL;
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
