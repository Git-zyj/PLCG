#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 295638662U;
unsigned long long int var_14 = 2314406001926313385ULL;
short var_15 = (short)-24806;
int zero = 0;
int var_18 = 1376184669;
unsigned long long int var_19 = 2643821923480279200ULL;
unsigned int var_20 = 1761175400U;
unsigned long long int var_21 = 7572307378490946550ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
