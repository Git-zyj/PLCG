#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4161;
unsigned int var_2 = 995495709U;
unsigned long long int var_3 = 11703103135899878610ULL;
unsigned int var_7 = 2700241447U;
short var_11 = (short)63;
short var_13 = (short)-9799;
int zero = 0;
unsigned long long int var_15 = 11789942809294270245ULL;
unsigned int var_16 = 1567161366U;
unsigned long long int var_17 = 8826555915716096058ULL;
void init() {
}

void checksum() {
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
