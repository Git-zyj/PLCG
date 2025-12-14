#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8021140022294553326LL;
short var_3 = (short)-28453;
unsigned long long int var_4 = 4851912657914434728ULL;
int var_8 = -763127019;
unsigned long long int var_9 = 11185056355485631494ULL;
int zero = 0;
short var_10 = (short)-9633;
unsigned long long int var_11 = 10723278018492437096ULL;
unsigned char var_12 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
