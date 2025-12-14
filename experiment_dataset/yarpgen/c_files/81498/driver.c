#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2119009020859246102LL;
unsigned int var_2 = 2883360959U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-50;
long long int var_10 = 8743309260203456689LL;
int zero = 0;
unsigned short var_12 = (unsigned short)49249;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
