#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23944;
_Bool var_9 = (_Bool)1;
long long int var_10 = -6045729292719353227LL;
int var_11 = -1853505181;
int zero = 0;
int var_14 = 687972156;
long long int var_15 = -1903807048467425286LL;
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
