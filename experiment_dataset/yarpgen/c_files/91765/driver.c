#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2422975603748890960ULL;
unsigned long long int var_7 = 12108348921466161932ULL;
unsigned long long int var_8 = 4655104630588373595ULL;
int zero = 0;
short var_10 = (short)21019;
signed char var_11 = (signed char)-96;
unsigned long long int var_12 = 14461241526667457069ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
