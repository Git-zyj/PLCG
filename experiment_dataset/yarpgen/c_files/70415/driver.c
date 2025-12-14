#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)10;
int var_5 = -1192176177;
unsigned long long int var_6 = 13030420957018677088ULL;
long long int var_9 = 4637485678186351316LL;
int zero = 0;
long long int var_13 = -3040137519478935750LL;
short var_14 = (short)23539;
unsigned long long int var_15 = 10675283092504360376ULL;
short var_16 = (short)24713;
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
