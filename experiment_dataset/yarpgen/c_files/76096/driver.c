#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 110348464;
unsigned int var_6 = 708406227U;
unsigned long long int var_7 = 3180423152895493950ULL;
unsigned int var_8 = 2717186200U;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_19 = -7088856433213721314LL;
unsigned char var_20 = (unsigned char)126;
int var_21 = -885399784;
void init() {
}

void checksum() {
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
