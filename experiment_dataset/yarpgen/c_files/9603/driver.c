#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)3157;
long long int var_18 = 8702203970736438897LL;
int zero = 0;
short var_19 = (short)9189;
unsigned long long int var_20 = 14392081060203889074ULL;
unsigned long long int var_21 = 10376373271968324126ULL;
unsigned long long int var_22 = 3852231847939344429ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
