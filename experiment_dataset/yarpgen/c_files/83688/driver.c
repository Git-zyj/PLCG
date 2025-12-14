#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2428739251U;
long long int var_7 = 9124566595312399377LL;
int var_8 = 934528160;
int zero = 0;
long long int var_13 = -4615926433514641415LL;
unsigned short var_14 = (unsigned short)7061;
int var_15 = 1672221038;
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
