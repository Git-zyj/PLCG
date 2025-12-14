#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8101380751586140268LL;
long long int var_2 = 9110749719340312099LL;
unsigned char var_4 = (unsigned char)170;
unsigned char var_6 = (unsigned char)136;
unsigned short var_7 = (unsigned short)3506;
int zero = 0;
unsigned short var_11 = (unsigned short)32845;
signed char var_12 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
