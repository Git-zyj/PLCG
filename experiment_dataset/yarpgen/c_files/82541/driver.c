#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10639667710447074979ULL;
unsigned long long int var_5 = 4596205248469331619ULL;
short var_8 = (short)-5002;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_13 = (short)29424;
unsigned short var_14 = (unsigned short)36025;
void init() {
}

void checksum() {
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
