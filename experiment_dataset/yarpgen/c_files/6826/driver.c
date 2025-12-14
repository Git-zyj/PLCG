#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_6 = (unsigned short)2907;
unsigned char var_9 = (unsigned char)251;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)65314;
int zero = 0;
long long int var_14 = -6807436776569163773LL;
long long int var_15 = -4293248860926611763LL;
unsigned short var_16 = (unsigned short)23209;
unsigned short var_17 = (unsigned short)51178;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
