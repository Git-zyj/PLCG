#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)615;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 1971517124U;
short var_7 = (short)16424;
unsigned int var_8 = 1302807863U;
signed char var_13 = (signed char)104;
int zero = 0;
short var_14 = (short)11296;
unsigned int var_15 = 4224746212U;
unsigned int var_16 = 1841485839U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
