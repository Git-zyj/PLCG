#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
_Bool var_1 = (_Bool)1;
short var_4 = (short)29600;
long long int var_5 = -1590914257439141791LL;
unsigned short var_8 = (unsigned short)36143;
int zero = 0;
unsigned long long int var_12 = 16327649542422887741ULL;
unsigned int var_13 = 3581464868U;
void init() {
}

void checksum() {
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
