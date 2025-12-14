#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22509;
int var_5 = 1206616486;
unsigned char var_9 = (unsigned char)5;
short var_19 = (short)20736;
int zero = 0;
unsigned long long int var_20 = 2192706194498722764ULL;
long long int var_21 = 1446791231190883533LL;
unsigned char var_22 = (unsigned char)33;
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
