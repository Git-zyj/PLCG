#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1167204716;
unsigned long long int var_2 = 9446689164371007994ULL;
short var_3 = (short)3906;
unsigned short var_6 = (unsigned short)27248;
int zero = 0;
int var_10 = -373693352;
unsigned long long int var_11 = 2470217072835132812ULL;
int var_12 = -1869687990;
long long int var_13 = -5243067169032154931LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
