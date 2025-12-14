#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 709036979U;
unsigned int var_4 = 4274039668U;
long long int var_7 = 5931738964499019892LL;
long long int var_8 = 1378626196457292117LL;
unsigned int var_10 = 477287306U;
unsigned int var_11 = 2549138407U;
int zero = 0;
signed char var_14 = (signed char)16;
unsigned int var_15 = 644185539U;
unsigned int var_16 = 1378266258U;
unsigned int var_17 = 3575613890U;
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
