#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8432039640543672824ULL;
int var_4 = 199404961;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 623650089U;
unsigned long long int var_8 = 2980944861016274235ULL;
int zero = 0;
unsigned long long int var_10 = 1962301271014462532ULL;
unsigned int var_11 = 1012863946U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
