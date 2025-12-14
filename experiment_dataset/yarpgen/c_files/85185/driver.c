#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
unsigned short var_5 = (unsigned short)32729;
unsigned int var_7 = 2349504064U;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_13 = -3177836732757090132LL;
short var_14 = (short)-25079;
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
