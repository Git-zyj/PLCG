#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5544964381075879114LL;
signed char var_6 = (signed char)79;
signed char var_13 = (signed char)25;
int zero = 0;
long long int var_19 = 7048609217209777576LL;
short var_20 = (short)-12357;
unsigned short var_21 = (unsigned short)33181;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
