#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)224;
long long int var_7 = -4102878524782033147LL;
unsigned long long int var_14 = 3765911109540510031ULL;
unsigned char var_16 = (unsigned char)103;
int zero = 0;
unsigned short var_18 = (unsigned short)25239;
long long int var_19 = 3410340769210152121LL;
unsigned char var_20 = (unsigned char)139;
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
