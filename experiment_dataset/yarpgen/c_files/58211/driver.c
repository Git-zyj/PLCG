#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1976968221071423372LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_8 = 5392311217350211846ULL;
short var_9 = (short)-6341;
_Bool var_11 = (_Bool)0;
short var_12 = (short)26070;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)11550;
signed char var_16 = (signed char)-52;
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
