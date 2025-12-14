#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -686299861664088653LL;
short var_1 = (short)24918;
short var_5 = (short)16080;
short var_9 = (short)-22139;
short var_10 = (short)5562;
short var_11 = (short)7278;
short var_14 = (short)2681;
short var_17 = (short)-17684;
short var_18 = (short)-3787;
int zero = 0;
short var_20 = (short)-28454;
long long int var_21 = 1324718751026541306LL;
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
