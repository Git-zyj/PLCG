#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4870010618148507996ULL;
unsigned short var_10 = (unsigned short)58042;
unsigned int var_13 = 4214420687U;
long long int var_15 = 2400412599331945307LL;
int zero = 0;
unsigned long long int var_17 = 8010546898169527349ULL;
unsigned long long int var_18 = 13455518039704286397ULL;
void init() {
}

void checksum() {
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
