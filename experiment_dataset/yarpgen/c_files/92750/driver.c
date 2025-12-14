#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)90;
long long int var_16 = -4256536694383947442LL;
unsigned int var_19 = 2505508421U;
int zero = 0;
unsigned char var_20 = (unsigned char)219;
long long int var_21 = 3526318515568913584LL;
short var_22 = (short)-19353;
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
