#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
long long int var_2 = -5400654904957290642LL;
unsigned char var_16 = (unsigned char)183;
int zero = 0;
unsigned long long int var_19 = 10988525190141977607ULL;
long long int var_20 = 6155203784295929102LL;
void init() {
}

void checksum() {
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
