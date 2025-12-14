#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1391093629;
unsigned long long int var_3 = 6126357592116521508ULL;
long long int var_4 = -1981964203510823421LL;
unsigned long long int var_5 = 16789653388221340616ULL;
int var_12 = 1455111376;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)75;
unsigned long long int var_21 = 10773130789325389782ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
