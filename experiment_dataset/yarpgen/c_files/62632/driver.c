#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2199806981U;
int var_4 = 1884565265;
unsigned int var_6 = 1543045116U;
unsigned int var_7 = 56324745U;
int zero = 0;
short var_10 = (short)13574;
long long int var_11 = -2115157858737123485LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
