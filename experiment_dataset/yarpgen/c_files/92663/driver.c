#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 515132790;
unsigned long long int var_1 = 7869115230636020493ULL;
unsigned int var_3 = 501327043U;
unsigned int var_5 = 1132890491U;
unsigned int var_6 = 3218843787U;
long long int var_14 = 1309965281133305347LL;
int zero = 0;
unsigned int var_16 = 2282572203U;
short var_17 = (short)-2571;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
