#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 842397849U;
int var_7 = -1719263921;
unsigned int var_15 = 4294842304U;
long long int var_16 = -4240037058110405352LL;
unsigned int var_18 = 988041540U;
int zero = 0;
unsigned short var_20 = (unsigned short)54609;
unsigned int var_21 = 2229746188U;
short var_22 = (short)9953;
unsigned char var_23 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
