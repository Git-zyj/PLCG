#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64250;
long long int var_7 = 7324523900681010765LL;
long long int var_13 = 6968779487863379166LL;
int zero = 0;
unsigned char var_16 = (unsigned char)2;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-85;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
