#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6428828402799822686LL;
unsigned long long int var_4 = 8006147927094174723ULL;
unsigned long long int var_16 = 4479867587518242984ULL;
int zero = 0;
unsigned int var_17 = 257021970U;
long long int var_18 = -8723974126039274101LL;
unsigned int var_19 = 1156168952U;
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
