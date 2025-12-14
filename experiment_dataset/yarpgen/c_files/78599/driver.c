#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2413782316U;
int var_14 = -1318640077;
long long int var_17 = 493487015319716287LL;
int zero = 0;
unsigned long long int var_18 = 7795744533857217615ULL;
unsigned int var_19 = 4187357365U;
unsigned int var_20 = 1039693451U;
unsigned int var_21 = 3787444073U;
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
