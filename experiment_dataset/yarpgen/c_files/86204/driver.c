#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14491820063455353045ULL;
unsigned int var_4 = 2840268991U;
unsigned long long int var_6 = 13895172542889140492ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 17953162235459526783ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)138;
void init() {
}

void checksum() {
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
