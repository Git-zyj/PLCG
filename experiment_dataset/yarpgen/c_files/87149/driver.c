#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16522218015232069675ULL;
unsigned long long int var_3 = 6067604003085146705ULL;
_Bool var_5 = (_Bool)1;
int zero = 0;
int var_10 = -979630459;
unsigned long long int var_11 = 4195653364951469014ULL;
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
