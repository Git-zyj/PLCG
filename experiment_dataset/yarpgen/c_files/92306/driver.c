#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 894642066;
unsigned long long int var_9 = 11243398332122683737ULL;
int var_10 = 1782674179;
short var_11 = (short)7026;
int zero = 0;
unsigned long long int var_13 = 3464855936141169580ULL;
long long int var_14 = -3985373477347697980LL;
long long int var_15 = 1095071381085650835LL;
short var_16 = (short)32222;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
