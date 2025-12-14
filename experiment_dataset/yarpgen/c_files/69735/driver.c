#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1178484018U;
_Bool var_8 = (_Bool)1;
long long int var_11 = 8230545249066891992LL;
int zero = 0;
unsigned long long int var_12 = 13754214044021216975ULL;
long long int var_13 = -476122000988925957LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)14144;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
