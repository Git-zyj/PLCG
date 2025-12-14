#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13126648192758571824ULL;
unsigned long long int var_2 = 14887757026386292206ULL;
unsigned long long int var_10 = 10708161807219230724ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)139;
unsigned long long int var_17 = 2378461476006647486ULL;
int var_18 = -325722284;
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
