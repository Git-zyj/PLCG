#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3877786749051425430LL;
unsigned char var_3 = (unsigned char)59;
long long int var_7 = 1143646424630397890LL;
int zero = 0;
short var_12 = (short)-3472;
unsigned short var_13 = (unsigned short)53772;
int var_14 = -467964684;
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
