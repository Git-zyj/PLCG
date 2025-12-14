#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17460161234011445404ULL;
signed char var_7 = (signed char)79;
unsigned int var_10 = 4267316461U;
unsigned char var_11 = (unsigned char)12;
int zero = 0;
unsigned int var_12 = 3148314894U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
