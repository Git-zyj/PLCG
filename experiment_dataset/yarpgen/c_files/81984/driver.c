#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3859521774856820635LL;
unsigned short var_5 = (unsigned short)23552;
unsigned long long int var_8 = 5318969997650526471ULL;
unsigned char var_9 = (unsigned char)124;
int zero = 0;
short var_20 = (short)19295;
short var_21 = (short)-18785;
void init() {
}

void checksum() {
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
