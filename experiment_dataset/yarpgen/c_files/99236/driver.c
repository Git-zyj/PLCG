#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30444;
short var_5 = (short)23605;
unsigned int var_7 = 1628199616U;
int zero = 0;
long long int var_10 = 6018714508975593616LL;
short var_11 = (short)27659;
short var_12 = (short)-20014;
long long int var_13 = 1608931979253350192LL;
long long int var_14 = -4296861412373856073LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
