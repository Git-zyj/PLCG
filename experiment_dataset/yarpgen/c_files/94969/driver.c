#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1937842457;
long long int var_1 = 6414392390811964134LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_14 = -6076632156764970060LL;
long long int var_16 = 119059180554677098LL;
int zero = 0;
signed char var_17 = (signed char)-18;
unsigned short var_18 = (unsigned short)14870;
void init() {
}

void checksum() {
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
