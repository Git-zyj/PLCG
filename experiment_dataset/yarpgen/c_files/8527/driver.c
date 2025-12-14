#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3530045416U;
unsigned int var_1 = 598613493U;
unsigned char var_5 = (unsigned char)64;
unsigned short var_6 = (unsigned short)42219;
unsigned short var_7 = (unsigned short)39669;
int var_10 = 2075988949;
unsigned int var_12 = 1559713055U;
long long int var_15 = 432967269192277674LL;
unsigned int var_16 = 2789766549U;
int zero = 0;
unsigned int var_17 = 1599226191U;
unsigned int var_18 = 284630266U;
unsigned int var_19 = 2081596719U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
