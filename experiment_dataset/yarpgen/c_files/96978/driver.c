#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26721;
unsigned int var_4 = 4158599378U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)46;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)17559;
_Bool var_19 = (_Bool)0;
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
