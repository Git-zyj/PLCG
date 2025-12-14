#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned short var_3 = (unsigned short)54559;
signed char var_5 = (signed char)65;
signed char var_12 = (signed char)-32;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -4619187345017734995LL;
unsigned short var_15 = (unsigned short)20433;
signed char var_16 = (signed char)9;
int var_17 = -966700431;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
