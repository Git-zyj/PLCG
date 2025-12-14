#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)108;
unsigned long long int var_10 = 1735945406468014207ULL;
signed char var_11 = (signed char)99;
short var_17 = (short)-18999;
int zero = 0;
short var_18 = (short)-19883;
int var_19 = -405215762;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
