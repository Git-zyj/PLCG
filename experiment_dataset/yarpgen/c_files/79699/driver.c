#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6320;
long long int var_6 = -7209194068103617069LL;
unsigned short var_7 = (unsigned short)62417;
_Bool var_8 = (_Bool)1;
unsigned int var_12 = 1884558881U;
int zero = 0;
unsigned long long int var_19 = 12363627697985741885ULL;
long long int var_20 = 6224341836080373699LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
