#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3440106189U;
signed char var_7 = (signed char)-62;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_18 = (short)-10603;
unsigned char var_19 = (unsigned char)76;
short var_20 = (short)21825;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
