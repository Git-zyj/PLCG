#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 1270632562U;
int zero = 0;
int var_19 = 2025917726;
unsigned char var_20 = (unsigned char)165;
long long int var_21 = -3135553675368831277LL;
void init() {
}

void checksum() {
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
