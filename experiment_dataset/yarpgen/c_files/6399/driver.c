#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
unsigned short var_2 = (unsigned short)16384;
unsigned int var_3 = 1198360475U;
unsigned int var_5 = 4260678963U;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
