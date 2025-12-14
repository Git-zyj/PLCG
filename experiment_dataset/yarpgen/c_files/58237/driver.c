#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15194816250465356164ULL;
unsigned long long int var_1 = 5689384088841309946ULL;
_Bool var_11 = (_Bool)0;
int var_17 = -376620425;
int zero = 0;
unsigned long long int var_19 = 10115029208861712641ULL;
int var_20 = -559982731;
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
