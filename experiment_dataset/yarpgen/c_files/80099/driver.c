#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17912340979299550805ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_7 = -1296772161;
int zero = 0;
unsigned short var_15 = (unsigned short)9382;
short var_16 = (short)-21645;
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
