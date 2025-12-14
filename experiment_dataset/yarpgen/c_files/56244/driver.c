#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15536;
unsigned char var_3 = (unsigned char)233;
long long int var_5 = -4513960380957998802LL;
short var_6 = (short)10389;
int var_7 = -135193826;
int zero = 0;
unsigned char var_12 = (unsigned char)219;
unsigned char var_13 = (unsigned char)94;
void init() {
}

void checksum() {
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
