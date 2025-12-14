#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15317168312932085004ULL;
unsigned short var_8 = (unsigned short)27368;
long long int var_12 = 8467920531131294460LL;
long long int var_14 = -2510777841345925490LL;
int zero = 0;
short var_15 = (short)6432;
long long int var_16 = -9200519072665572823LL;
int var_17 = 997040539;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
