#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7002;
long long int var_3 = 25281208639701315LL;
unsigned short var_8 = (unsigned short)5427;
int var_10 = -1157818216;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 331073861923705995ULL;
signed char var_16 = (signed char)114;
short var_17 = (short)-2411;
unsigned long long int var_18 = 17462170134081047370ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
