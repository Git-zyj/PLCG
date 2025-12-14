#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6478243460304366038LL;
unsigned int var_13 = 807612684U;
long long int var_15 = -3788582656201675080LL;
int zero = 0;
short var_18 = (short)2420;
unsigned long long int var_19 = 3197878578698163759ULL;
short var_20 = (short)16596;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
