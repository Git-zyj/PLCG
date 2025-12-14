#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7237874953009957705LL;
_Bool var_2 = (_Bool)0;
unsigned char var_11 = (unsigned char)96;
unsigned long long int var_12 = 4152551683944802611ULL;
int zero = 0;
unsigned long long int var_16 = 6987759660824903143ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
