#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4744087160785903162LL;
short var_2 = (short)-15011;
signed char var_3 = (signed char)80;
int zero = 0;
unsigned int var_12 = 2563371953U;
short var_13 = (short)10163;
unsigned long long int var_14 = 16286077989218136173ULL;
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
