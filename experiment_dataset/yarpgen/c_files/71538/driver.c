#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
long long int var_2 = -7015515128475851117LL;
unsigned long long int var_3 = 4107668016631537661ULL;
int zero = 0;
signed char var_20 = (signed char)-107;
unsigned long long int var_21 = 14608474691580710644ULL;
unsigned long long int var_22 = 8607435902191178488ULL;
long long int var_23 = -4094087324931816282LL;
long long int var_24 = 1352675204331224079LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
