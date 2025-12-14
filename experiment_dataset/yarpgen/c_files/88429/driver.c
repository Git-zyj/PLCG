#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1458001149;
unsigned int var_9 = 3661064008U;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)52;
int zero = 0;
signed char var_15 = (signed char)104;
int var_16 = 358824214;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
