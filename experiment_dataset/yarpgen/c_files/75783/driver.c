#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3739030350936857393ULL;
short var_5 = (short)-22830;
unsigned long long int var_9 = 11381198444384036556ULL;
unsigned char var_10 = (unsigned char)17;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 4194066993414278447ULL;
unsigned char var_19 = (unsigned char)7;
short var_20 = (short)24933;
void init() {
}

void checksum() {
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
