#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 3072504678034374590ULL;
long long int var_7 = 8582365572055772269LL;
unsigned long long int var_10 = 12337673645995175964ULL;
unsigned char var_13 = (unsigned char)98;
short var_16 = (short)17231;
int zero = 0;
long long int var_19 = -6249442714662388311LL;
int var_20 = 1000738523;
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
