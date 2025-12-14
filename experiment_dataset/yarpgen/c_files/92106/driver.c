#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10944;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 2651828338U;
long long int var_9 = -7579889823246486912LL;
int zero = 0;
unsigned int var_10 = 3796120014U;
long long int var_11 = 7977258909452026232LL;
long long int var_12 = -546944405829799662LL;
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
