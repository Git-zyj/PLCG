#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1524167338;
long long int var_2 = 4107816262220610555LL;
unsigned short var_3 = (unsigned short)37852;
unsigned long long int var_4 = 4919943752083365475ULL;
unsigned long long int var_5 = 4924035698424457659ULL;
signed char var_6 = (signed char)82;
unsigned long long int var_12 = 10519340571600658749ULL;
short var_13 = (short)-9998;
unsigned char var_17 = (unsigned char)3;
unsigned long long int var_18 = 2280643040060978576ULL;
int zero = 0;
unsigned int var_20 = 3846128395U;
unsigned long long int var_21 = 12206730058100691012ULL;
short var_22 = (short)-30097;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
