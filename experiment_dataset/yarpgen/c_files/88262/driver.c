#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31717;
short var_6 = (short)11199;
long long int var_11 = 2235058090745454971LL;
long long int var_13 = -4350663995242792108LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)16385;
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
