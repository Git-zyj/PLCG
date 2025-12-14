#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1251378156;
unsigned long long int var_6 = 11829193978651985438ULL;
unsigned short var_16 = (unsigned short)27396;
int zero = 0;
unsigned char var_17 = (unsigned char)146;
int var_18 = 1609006891;
unsigned char var_19 = (unsigned char)243;
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
