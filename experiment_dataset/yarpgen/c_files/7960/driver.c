#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3693;
short var_11 = (short)-1452;
unsigned long long int var_14 = 10173681192702165710ULL;
int zero = 0;
long long int var_17 = 2793432927691470711LL;
long long int var_18 = -3458890969783094462LL;
unsigned int var_19 = 1099157510U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
