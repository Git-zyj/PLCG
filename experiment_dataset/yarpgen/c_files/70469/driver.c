#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)241;
unsigned long long int var_6 = 3343520087792978601ULL;
long long int var_9 = 2890253604539135536LL;
unsigned short var_14 = (unsigned short)33769;
unsigned long long int var_17 = 9938632557093117144ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)56426;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
