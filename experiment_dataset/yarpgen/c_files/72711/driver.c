#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9960316223453420588ULL;
signed char var_10 = (signed char)-7;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)46977;
int zero = 0;
signed char var_19 = (signed char)-6;
unsigned int var_20 = 3686166745U;
signed char var_21 = (signed char)15;
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
