#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)139;
signed char var_3 = (signed char)-38;
long long int var_4 = -4180982262589526143LL;
unsigned int var_7 = 1564960070U;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-85;
int var_12 = -219782356;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
