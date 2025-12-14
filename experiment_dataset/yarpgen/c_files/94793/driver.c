#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -937445955;
unsigned char var_13 = (unsigned char)157;
long long int var_14 = -7050991926044201863LL;
unsigned int var_17 = 1095771209U;
int zero = 0;
signed char var_18 = (signed char)9;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 8131974568793871492ULL;
unsigned int var_21 = 1143052381U;
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
