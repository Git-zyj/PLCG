#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3878284239145644949LL;
int var_4 = -1349215027;
unsigned char var_5 = (unsigned char)46;
unsigned long long int var_8 = 9799307365908444960ULL;
int zero = 0;
signed char var_15 = (signed char)83;
unsigned char var_16 = (unsigned char)6;
_Bool var_17 = (_Bool)0;
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
