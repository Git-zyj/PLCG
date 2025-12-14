#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)79;
short var_10 = (short)-6035;
long long int var_15 = 5095109567070697607LL;
int zero = 0;
unsigned short var_20 = (unsigned short)24830;
unsigned long long int var_21 = 7201264401038002644ULL;
long long int var_22 = 3006331009687760097LL;
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
