#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 706753119U;
unsigned int var_1 = 1840689331U;
int var_3 = 573555648;
short var_4 = (short)11564;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)47761;
unsigned long long int var_9 = 9301026312985602926ULL;
int zero = 0;
unsigned long long int var_10 = 11195042238168184406ULL;
unsigned long long int var_11 = 10344186756072847005ULL;
signed char var_12 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
