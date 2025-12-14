#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -854132040;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)50077;
unsigned int var_18 = 2072473038U;
int zero = 0;
unsigned long long int var_19 = 6211866988459478996ULL;
unsigned short var_20 = (unsigned short)61244;
void init() {
}

void checksum() {
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
