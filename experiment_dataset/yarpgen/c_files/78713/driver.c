#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned int var_1 = 1640092357U;
int var_7 = -1170269918;
int var_8 = -1319349192;
int var_12 = 1238767250;
unsigned char var_14 = (unsigned char)23;
unsigned long long int var_17 = 8649200788564571453ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)60;
long long int var_19 = 8146709206535572151LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
