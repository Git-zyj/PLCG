#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1623090575564010092ULL;
unsigned short var_5 = (unsigned short)22775;
long long int var_9 = -8351164049175127072LL;
unsigned long long int var_10 = 17417565612005057851ULL;
int zero = 0;
long long int var_11 = -6910064260683362843LL;
unsigned long long int var_12 = 636335505087745602ULL;
int var_13 = -1505530993;
unsigned long long int var_14 = 16411032417617866423ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
