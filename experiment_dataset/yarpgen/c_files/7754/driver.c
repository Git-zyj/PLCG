#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29007;
short var_2 = (short)27159;
unsigned int var_3 = 755964578U;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1016131550U;
long long int var_10 = 1582752138828585504LL;
int zero = 0;
signed char var_12 = (signed char)-3;
short var_13 = (short)-30408;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-19562;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
