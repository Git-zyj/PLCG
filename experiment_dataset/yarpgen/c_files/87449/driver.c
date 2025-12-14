#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14348418034878618504ULL;
unsigned short var_1 = (unsigned short)37020;
signed char var_2 = (signed char)23;
long long int var_5 = 4632990476949832219LL;
long long int var_6 = -2833940219440160660LL;
long long int var_9 = -1148625705465876711LL;
int zero = 0;
long long int var_14 = -501617141916436344LL;
unsigned long long int var_15 = 3062304011982829179ULL;
unsigned short var_16 = (unsigned short)37144;
void init() {
}

void checksum() {
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
