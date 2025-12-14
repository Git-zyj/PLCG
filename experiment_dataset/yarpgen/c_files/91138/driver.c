#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4436996875614434921LL;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)-10;
signed char var_10 = (signed char)-52;
int zero = 0;
int var_17 = 1849029253;
short var_18 = (short)-6647;
signed char var_19 = (signed char)6;
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
