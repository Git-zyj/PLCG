#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25630;
long long int var_2 = -9076845559906324357LL;
unsigned char var_6 = (unsigned char)87;
unsigned int var_7 = 798886092U;
long long int var_8 = 2080716842983469163LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -6850382900621068925LL;
long long int var_13 = -9115171815330025226LL;
int var_14 = -1321427898;
long long int var_15 = 7964331785081777568LL;
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
