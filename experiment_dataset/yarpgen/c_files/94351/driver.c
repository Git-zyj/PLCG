#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 353851452U;
unsigned char var_5 = (unsigned char)131;
int var_6 = -1223260455;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_15 = 377888455;
unsigned int var_16 = 1222614776U;
void init() {
}

void checksum() {
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
