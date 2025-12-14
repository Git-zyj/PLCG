#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7917323404636719293ULL;
unsigned long long int var_4 = 7744364764303820883ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 512158528U;
short var_7 = (short)-9725;
short var_9 = (short)-27194;
unsigned long long int var_10 = 9421735086381085391ULL;
int zero = 0;
short var_11 = (short)-18459;
unsigned long long int var_12 = 5366802961737375115ULL;
short var_13 = (short)-1873;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
