#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-2;
unsigned short var_5 = (unsigned short)2921;
unsigned short var_8 = (unsigned short)9651;
_Bool var_9 = (_Bool)1;
short var_11 = (short)18471;
long long int var_14 = 3313921409192915483LL;
int zero = 0;
unsigned int var_20 = 3897031088U;
short var_21 = (short)21179;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
