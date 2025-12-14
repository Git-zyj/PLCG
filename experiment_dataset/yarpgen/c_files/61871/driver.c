#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12500403334424051845ULL;
short var_4 = (short)-25755;
unsigned int var_7 = 475575569U;
signed char var_9 = (signed char)69;
int zero = 0;
unsigned short var_12 = (unsigned short)14743;
unsigned short var_13 = (unsigned short)56836;
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
