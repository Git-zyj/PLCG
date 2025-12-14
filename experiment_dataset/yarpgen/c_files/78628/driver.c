#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 127602353563295937ULL;
short var_13 = (short)-18272;
int zero = 0;
unsigned short var_15 = (unsigned short)62847;
unsigned long long int var_16 = 4416511107090069233ULL;
long long int var_17 = -5069139878737028363LL;
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
