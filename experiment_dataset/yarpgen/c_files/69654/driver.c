#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2652;
long long int var_3 = -4823682835492809870LL;
short var_4 = (short)-21599;
long long int var_6 = 6680080870385201364LL;
short var_11 = (short)-28517;
short var_13 = (short)-8003;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)27;
int zero = 0;
short var_19 = (short)17368;
short var_20 = (short)-966;
unsigned int var_21 = 3810970184U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
