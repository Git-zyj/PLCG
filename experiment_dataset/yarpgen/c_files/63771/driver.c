#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_6 = -9157826887738872007LL;
int zero = 0;
long long int var_18 = 510765807662664501LL;
unsigned long long int var_19 = 10196256698368329010ULL;
unsigned char var_20 = (unsigned char)185;
int var_21 = 1248800650;
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
