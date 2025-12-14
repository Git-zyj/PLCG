#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63902;
unsigned long long int var_3 = 10685221781312881533ULL;
unsigned int var_10 = 4225685591U;
unsigned int var_14 = 2209132143U;
int zero = 0;
unsigned int var_16 = 4255852942U;
long long int var_17 = -3119365955263007511LL;
unsigned short var_18 = (unsigned short)40482;
unsigned short var_19 = (unsigned short)61159;
unsigned int var_20 = 1428887201U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
