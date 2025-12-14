#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6168315499471892812ULL;
long long int var_2 = -2251328763899441361LL;
signed char var_3 = (signed char)-64;
unsigned int var_6 = 2795409427U;
unsigned char var_9 = (unsigned char)44;
int zero = 0;
short var_10 = (short)-16717;
int var_11 = -1168397287;
_Bool var_12 = (_Bool)1;
int var_13 = 1796120567;
unsigned int var_14 = 549919224U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
