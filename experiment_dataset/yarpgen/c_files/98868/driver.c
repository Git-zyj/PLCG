#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
short var_7 = (short)1729;
_Bool var_9 = (_Bool)0;
unsigned char var_17 = (unsigned char)255;
int zero = 0;
signed char var_18 = (signed char)39;
unsigned long long int var_19 = 2110655843134840115ULL;
signed char var_20 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
