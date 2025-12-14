#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3202260286U;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)19835;
signed char var_4 = (signed char)99;
int zero = 0;
signed char var_11 = (signed char)46;
signed char var_12 = (signed char)75;
unsigned int var_13 = 3101266570U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
