#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10548078545322312471ULL;
signed char var_11 = (signed char)-13;
signed char var_17 = (signed char)-62;
int zero = 0;
unsigned long long int var_20 = 1141587219600924185ULL;
long long int var_21 = 1102740870204797687LL;
void init() {
}

void checksum() {
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
