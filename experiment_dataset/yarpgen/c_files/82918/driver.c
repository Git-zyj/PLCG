#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)99;
unsigned short var_5 = (unsigned short)1060;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2781432717933800510LL;
int zero = 0;
long long int var_13 = 2403450549145680193LL;
unsigned short var_14 = (unsigned short)7407;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
