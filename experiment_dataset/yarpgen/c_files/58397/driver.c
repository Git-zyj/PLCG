#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-20133;
unsigned int var_10 = 2104537406U;
unsigned short var_12 = (unsigned short)8994;
unsigned long long int var_14 = 7655959696292851075ULL;
int zero = 0;
unsigned long long int var_19 = 11195415830389179350ULL;
_Bool var_20 = (_Bool)1;
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
