#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2028452005U;
signed char var_4 = (signed char)-113;
signed char var_6 = (signed char)-104;
long long int var_8 = -5203095284127695831LL;
int zero = 0;
unsigned int var_10 = 3080154851U;
short var_11 = (short)-5778;
signed char var_12 = (signed char)-81;
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
