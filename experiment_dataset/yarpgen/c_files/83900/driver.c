#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)53;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-63;
unsigned char var_7 = (unsigned char)129;
unsigned int var_9 = 3430881069U;
short var_10 = (short)24055;
unsigned char var_11 = (unsigned char)135;
int var_12 = 2009650888;
short var_13 = (short)17719;
unsigned long long int var_14 = 6950185561638356943ULL;
int zero = 0;
long long int var_15 = -4625067684519645986LL;
int var_16 = 1536449368;
long long int var_17 = 7963483420213536215LL;
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
