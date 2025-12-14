#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2483540468414443719LL;
unsigned long long int var_3 = 14059115938788857372ULL;
unsigned long long int var_4 = 18333403927780003973ULL;
unsigned short var_8 = (unsigned short)23567;
unsigned long long int var_13 = 6167239963348370523ULL;
unsigned short var_16 = (unsigned short)23729;
int zero = 0;
unsigned int var_18 = 1249778490U;
long long int var_19 = 4697585330314539600LL;
unsigned int var_20 = 893731131U;
unsigned long long int var_21 = 5679571987538672682ULL;
unsigned int var_22 = 2109431153U;
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
