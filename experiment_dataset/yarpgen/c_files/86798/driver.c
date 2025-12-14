#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1985811028;
unsigned int var_1 = 3332538035U;
long long int var_3 = -6249953331902554834LL;
unsigned short var_5 = (unsigned short)44962;
unsigned short var_6 = (unsigned short)22656;
short var_10 = (short)-16721;
int zero = 0;
unsigned int var_11 = 1239468309U;
long long int var_12 = 8548292473680659620LL;
long long int var_13 = 683153050739339082LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
