#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4864244826296110669LL;
unsigned char var_10 = (unsigned char)36;
unsigned short var_11 = (unsigned short)11859;
long long int var_12 = 6796008888618409548LL;
int zero = 0;
int var_17 = -8320648;
unsigned long long int var_18 = 9271749086430665557ULL;
int var_19 = 304973060;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
