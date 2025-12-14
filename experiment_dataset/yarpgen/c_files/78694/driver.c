#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 30660488;
long long int var_1 = 1006586222711067536LL;
unsigned int var_2 = 2411105210U;
unsigned short var_3 = (unsigned short)44584;
unsigned long long int var_7 = 8993604467531438718ULL;
int zero = 0;
unsigned long long int var_14 = 5786823055178400746ULL;
unsigned long long int var_15 = 10451011319952110633ULL;
unsigned long long int var_16 = 3722789115465760873ULL;
int var_17 = -250510455;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
