#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2090149804U;
long long int var_1 = -5069692911586774966LL;
int var_3 = 1851047073;
unsigned long long int var_5 = 8003267746518244903ULL;
signed char var_6 = (signed char)48;
unsigned short var_7 = (unsigned short)51591;
short var_10 = (short)-6030;
signed char var_11 = (signed char)-47;
unsigned long long int var_12 = 12660296395125946578ULL;
unsigned int var_15 = 1732279104U;
long long int var_17 = 401825260037115845LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1928728148U;
int zero = 0;
unsigned long long int var_20 = 9864486750852813614ULL;
long long int var_21 = 9003011881060361906LL;
unsigned short var_22 = (unsigned short)17942;
unsigned int var_23 = 497559982U;
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
