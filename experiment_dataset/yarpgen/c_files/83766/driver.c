#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32011;
int var_4 = -860316792;
unsigned long long int var_5 = 8176281577620608137ULL;
int var_8 = -1895650211;
int zero = 0;
long long int var_10 = -7878897549140802254LL;
int var_11 = 1714738579;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
