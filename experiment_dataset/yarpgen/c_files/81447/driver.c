#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7672946168727169176LL;
unsigned long long int var_4 = 7427607301293849422ULL;
signed char var_6 = (signed char)108;
short var_7 = (short)20432;
unsigned char var_12 = (unsigned char)201;
unsigned long long int var_13 = 15769471868231201249ULL;
int zero = 0;
unsigned long long int var_14 = 1266411945252276736ULL;
unsigned long long int var_15 = 15723863265392863065ULL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)13435;
short var_18 = (short)-26035;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
