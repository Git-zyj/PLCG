#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1733662899036124631LL;
signed char var_2 = (signed char)49;
unsigned int var_3 = 414159996U;
int var_12 = 412166401;
int zero = 0;
short var_15 = (short)32077;
unsigned short var_16 = (unsigned short)40037;
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
