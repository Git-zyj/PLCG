#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -498794377;
short var_7 = (short)13917;
unsigned long long int var_10 = 5102601729295172629ULL;
unsigned int var_11 = 3566663160U;
int zero = 0;
unsigned char var_16 = (unsigned char)103;
unsigned char var_17 = (unsigned char)173;
long long int var_18 = -8190899902071236527LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
