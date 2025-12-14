#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8401146272097322307LL;
short var_6 = (short)-18576;
unsigned char var_7 = (unsigned char)193;
unsigned long long int var_8 = 68701766077505454ULL;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-106;
int zero = 0;
unsigned int var_16 = 3984792269U;
signed char var_17 = (signed char)70;
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
