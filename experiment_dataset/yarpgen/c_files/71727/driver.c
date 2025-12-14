#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 646444400;
int var_2 = -1904748462;
unsigned char var_4 = (unsigned char)96;
signed char var_6 = (signed char)103;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_15 = -1759754819;
unsigned long long int var_16 = 6987161648188897600ULL;
unsigned long long int var_17 = 12489263823133205370ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
