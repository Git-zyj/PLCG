#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16229;
unsigned int var_1 = 3264097113U;
_Bool var_5 = (_Bool)0;
long long int var_6 = 3663072524726898860LL;
long long int var_8 = 7909200988732924444LL;
int zero = 0;
short var_14 = (short)24332;
long long int var_15 = -1043687661714516521LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
