#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11179773863850912657ULL;
signed char var_6 = (signed char)-10;
int var_10 = 1269938962;
int var_12 = 1765163137;
unsigned char var_15 = (unsigned char)185;
int zero = 0;
unsigned long long int var_18 = 2552321541765009032ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
