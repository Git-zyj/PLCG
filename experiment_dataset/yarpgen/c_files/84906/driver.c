#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4793390541988368788LL;
unsigned long long int var_10 = 16639089822646133962ULL;
long long int var_18 = 155219513072878383LL;
int zero = 0;
int var_20 = 2041710937;
unsigned short var_21 = (unsigned short)17730;
short var_22 = (short)-9276;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
