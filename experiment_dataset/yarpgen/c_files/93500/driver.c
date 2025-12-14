#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 152554147U;
unsigned int var_6 = 1727283060U;
int var_7 = -842717219;
signed char var_12 = (signed char)-94;
unsigned long long int var_14 = 4861648699484399764ULL;
int var_15 = 318614656;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)49;
void init() {
}

void checksum() {
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
