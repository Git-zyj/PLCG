#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
signed char var_8 = (signed char)-95;
unsigned long long int var_13 = 11738885469201539460ULL;
int zero = 0;
unsigned int var_16 = 4014475529U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)50339;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
