#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)147;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)117;
int zero = 0;
unsigned char var_15 = (unsigned char)223;
unsigned char var_16 = (unsigned char)163;
signed char var_17 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
