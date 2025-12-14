#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)55;
unsigned char var_5 = (unsigned char)199;
short var_7 = (short)-14398;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-8863;
unsigned char var_10 = (unsigned char)176;
unsigned int var_12 = 3037281793U;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
