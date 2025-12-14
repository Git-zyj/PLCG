#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1450725916U;
long long int var_10 = -7251354065686409558LL;
long long int var_14 = -3137272205252564440LL;
int zero = 0;
unsigned short var_15 = (unsigned short)14719;
int var_16 = -505104309;
long long int var_17 = -761280368032249572LL;
void init() {
}

void checksum() {
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
