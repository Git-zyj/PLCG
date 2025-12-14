#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12497274195517710472ULL;
short var_5 = (short)-21658;
_Bool var_6 = (_Bool)1;
long long int var_8 = 9068773831562188452LL;
unsigned int var_12 = 3505887412U;
unsigned int var_14 = 1607419677U;
int var_15 = -759402582;
int zero = 0;
unsigned int var_17 = 1137735093U;
unsigned long long int var_18 = 6989585641287212687ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
