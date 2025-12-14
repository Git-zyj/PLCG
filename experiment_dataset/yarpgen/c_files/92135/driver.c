#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 349954516;
int var_6 = 943491813;
short var_8 = (short)-31633;
unsigned char var_9 = (unsigned char)96;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)30056;
short var_15 = (short)-27768;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
