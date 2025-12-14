#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2545052629U;
signed char var_12 = (signed char)63;
unsigned short var_16 = (unsigned short)32723;
int zero = 0;
signed char var_20 = (signed char)27;
short var_21 = (short)25271;
int var_22 = 1788796621;
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
