#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10609;
signed char var_2 = (signed char)78;
unsigned long long int var_5 = 16380468905628215704ULL;
long long int var_10 = -8324080269643212607LL;
int zero = 0;
int var_19 = 1390547463;
long long int var_20 = 1559409668546770638LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
