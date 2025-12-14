#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1844817790782653212LL;
long long int var_2 = -6884512912912977772LL;
long long int var_3 = -9071359246033342339LL;
long long int var_4 = -5436237119227668328LL;
long long int var_6 = -2784067283990553678LL;
long long int var_7 = -4639917373034117340LL;
long long int var_8 = 4849538566684536639LL;
long long int var_10 = -3333454420423510450LL;
int zero = 0;
long long int var_13 = -5068956756144833839LL;
long long int var_14 = -8419315650166791710LL;
long long int var_15 = 6926638675126861230LL;
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
