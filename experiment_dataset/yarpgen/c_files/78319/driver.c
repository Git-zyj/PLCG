#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7510483285148280372LL;
short var_2 = (short)8259;
unsigned int var_3 = 398120219U;
unsigned int var_6 = 4148337031U;
long long int var_7 = 8073515742008848096LL;
long long int var_8 = 5366624772552635734LL;
int zero = 0;
unsigned short var_13 = (unsigned short)30054;
unsigned short var_14 = (unsigned short)36177;
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
