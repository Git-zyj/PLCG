#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7544299073788964947LL;
unsigned char var_6 = (unsigned char)87;
unsigned long long int var_7 = 2572749902128430406ULL;
int zero = 0;
short var_10 = (short)-2976;
unsigned char var_11 = (unsigned char)35;
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
