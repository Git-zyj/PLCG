#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8056;
unsigned char var_1 = (unsigned char)124;
unsigned char var_7 = (unsigned char)136;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_19 = (short)-30225;
long long int var_20 = 3848759511619267770LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 10966247888866173246ULL;
long long int var_23 = 941002485588378182LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
