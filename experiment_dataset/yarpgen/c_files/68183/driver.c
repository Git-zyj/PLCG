#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
unsigned short var_6 = (unsigned short)50672;
unsigned long long int var_8 = 7041731851803332071ULL;
unsigned char var_10 = (unsigned char)212;
signed char var_11 = (signed char)77;
unsigned short var_12 = (unsigned short)13250;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)55312;
unsigned short var_21 = (unsigned short)43067;
void init() {
}

void checksum() {
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
