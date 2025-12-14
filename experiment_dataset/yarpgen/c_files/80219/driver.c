#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 7550475880160667460ULL;
_Bool var_12 = (_Bool)1;
int var_13 = -1321340817;
int var_15 = -3572845;
int var_18 = -1987552370;
int zero = 0;
unsigned int var_19 = 542946290U;
unsigned long long int var_20 = 2487748013074202970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
