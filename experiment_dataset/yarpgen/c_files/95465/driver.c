#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4288508122462032006LL;
unsigned short var_3 = (unsigned short)43695;
_Bool var_4 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-112;
int var_14 = 1635950309;
void init() {
}

void checksum() {
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
