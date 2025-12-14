#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42293;
unsigned short var_3 = (unsigned short)61708;
int var_5 = 645625564;
unsigned int var_6 = 1567845656U;
short var_10 = (short)-19568;
long long int var_12 = 3162101849120673728LL;
int zero = 0;
long long int var_13 = -1939823755560795339LL;
unsigned short var_14 = (unsigned short)28299;
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
