#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1931355578;
unsigned short var_3 = (unsigned short)5850;
int var_5 = -328119422;
short var_7 = (short)28368;
int var_9 = -8647348;
short var_12 = (short)5613;
long long int var_15 = 6320496975076603505LL;
int zero = 0;
int var_20 = -1366787736;
unsigned short var_21 = (unsigned short)31696;
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
