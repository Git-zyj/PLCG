#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8630412623864007588ULL;
_Bool var_2 = (_Bool)0;
int var_3 = -2042760963;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3092060521U;
short var_8 = (short)-14120;
signed char var_9 = (signed char)-18;
unsigned short var_12 = (unsigned short)47015;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_20 = 426115337;
unsigned int var_21 = 2741594634U;
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
