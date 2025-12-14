#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15681;
int var_1 = 756753119;
unsigned char var_2 = (unsigned char)77;
int var_3 = -98302141;
unsigned char var_4 = (unsigned char)39;
long long int var_6 = 6821598193129894427LL;
long long int var_9 = 2504657723082534817LL;
int zero = 0;
long long int var_10 = -5072795573610808099LL;
_Bool var_11 = (_Bool)1;
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
