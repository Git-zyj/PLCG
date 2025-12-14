#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 699904042;
long long int var_7 = -9067173683481111948LL;
unsigned char var_9 = (unsigned char)10;
int zero = 0;
long long int var_11 = 2269077876960355842LL;
unsigned int var_12 = 301412735U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
