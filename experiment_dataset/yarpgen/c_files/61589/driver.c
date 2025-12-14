#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6621663380957755594LL;
long long int var_3 = -9090149500619387100LL;
unsigned short var_6 = (unsigned short)15889;
unsigned short var_7 = (unsigned short)56080;
unsigned short var_10 = (unsigned short)48981;
unsigned short var_15 = (unsigned short)6824;
long long int var_16 = 8510143544646818081LL;
int zero = 0;
unsigned short var_18 = (unsigned short)11291;
long long int var_19 = 4150460993585689310LL;
long long int var_20 = -4285232762399527627LL;
unsigned short var_21 = (unsigned short)15468;
unsigned short var_22 = (unsigned short)22814;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
