#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)49;
unsigned char var_5 = (unsigned char)159;
unsigned int var_6 = 3278284148U;
int zero = 0;
long long int var_14 = 3503630641843592972LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)17294;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
