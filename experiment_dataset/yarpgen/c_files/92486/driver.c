#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9964;
int var_5 = -1031387197;
long long int var_6 = 54991675905676056LL;
int zero = 0;
long long int var_11 = -3405523625076992999LL;
unsigned int var_12 = 1704976930U;
int var_13 = 1187142703;
long long int var_14 = -6251567203853541368LL;
unsigned long long int var_15 = 2094741007507573779ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
