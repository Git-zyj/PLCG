#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20285;
unsigned long long int var_2 = 10767506785662740772ULL;
int var_3 = 1618637014;
int var_8 = 971342966;
_Bool var_9 = (_Bool)0;
long long int var_13 = -7307068583198627800LL;
int zero = 0;
signed char var_14 = (signed char)28;
unsigned int var_15 = 3911311604U;
signed char var_16 = (signed char)35;
long long int var_17 = -7198610701934978436LL;
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
