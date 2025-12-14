#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_11 = 12777200981358134496ULL;
unsigned char var_16 = (unsigned char)17;
int zero = 0;
long long int var_17 = -8324232904507899574LL;
unsigned char var_18 = (unsigned char)42;
unsigned char var_19 = (unsigned char)108;
short var_20 = (short)29481;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
