#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)119;
_Bool var_13 = (_Bool)1;
int var_17 = 1609357980;
int zero = 0;
unsigned char var_20 = (unsigned char)73;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1737555084U;
void init() {
}

void checksum() {
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
