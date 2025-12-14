#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22812;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_9 = (short)26607;
long long int var_10 = 6158467029174820607LL;
int zero = 0;
unsigned short var_13 = (unsigned short)6827;
long long int var_14 = 482040861672417441LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
