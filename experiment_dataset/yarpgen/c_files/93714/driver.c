#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-67;
signed char var_4 = (signed char)-68;
unsigned int var_6 = 253634846U;
unsigned long long int var_8 = 12197088174353564119ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 2490087432U;
int zero = 0;
unsigned char var_16 = (unsigned char)221;
unsigned int var_17 = 2889519118U;
signed char var_18 = (signed char)-90;
signed char var_19 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
