#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4083124284U;
unsigned long long int var_2 = 16217953118910860363ULL;
short var_5 = (short)26781;
unsigned char var_6 = (unsigned char)181;
short var_10 = (short)26913;
unsigned short var_11 = (unsigned short)55379;
int zero = 0;
long long int var_12 = 2180610369731323758LL;
unsigned int var_13 = 4129400083U;
short var_14 = (short)-4917;
int var_15 = 715846580;
unsigned short var_16 = (unsigned short)9210;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
