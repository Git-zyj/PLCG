#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23366;
unsigned int var_5 = 3388864826U;
long long int var_10 = -361634638858872167LL;
unsigned long long int var_11 = 693809856890599907ULL;
long long int var_12 = 8222604306161398942LL;
unsigned short var_15 = (unsigned short)22975;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 16240501860876322133ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
