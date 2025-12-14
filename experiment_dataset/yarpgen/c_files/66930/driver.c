#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned long long int var_3 = 2055124870772755322ULL;
_Bool var_5 = (_Bool)0;
long long int var_9 = 5625403393834116817LL;
int zero = 0;
unsigned short var_10 = (unsigned short)36053;
short var_11 = (short)8050;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
