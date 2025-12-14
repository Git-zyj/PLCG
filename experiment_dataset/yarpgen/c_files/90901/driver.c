#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11143348321357542507ULL;
unsigned char var_7 = (unsigned char)150;
short var_10 = (short)-5081;
unsigned int var_15 = 877504541U;
int var_16 = 205925996;
int zero = 0;
unsigned char var_18 = (unsigned char)4;
_Bool var_19 = (_Bool)0;
short var_20 = (short)5222;
int var_21 = -1751507405;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
