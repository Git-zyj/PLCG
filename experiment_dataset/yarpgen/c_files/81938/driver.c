#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2078033977;
long long int var_4 = 8159923495374662191LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-4066;
unsigned char var_11 = (unsigned char)245;
int zero = 0;
unsigned int var_17 = 4192898037U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
