#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1171126301;
unsigned long long int var_2 = 10074121719180768784ULL;
long long int var_6 = -5708241433611314495LL;
int zero = 0;
unsigned int var_20 = 976513703U;
unsigned short var_21 = (unsigned short)11589;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
