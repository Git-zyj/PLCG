#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4454564140757250386LL;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)43;
long long int var_8 = -312673365272188660LL;
int zero = 0;
unsigned int var_12 = 1937358081U;
unsigned char var_13 = (unsigned char)253;
signed char var_14 = (signed char)-23;
void init() {
}

void checksum() {
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
