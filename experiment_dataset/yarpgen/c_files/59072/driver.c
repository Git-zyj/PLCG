#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)6905;
unsigned long long int var_11 = 2358895178513674741ULL;
signed char var_19 = (signed char)-56;
int zero = 0;
signed char var_20 = (signed char)-1;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
