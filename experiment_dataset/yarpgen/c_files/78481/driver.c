#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25358;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)35;
signed char var_7 = (signed char)11;
unsigned long long int var_12 = 10169641327963050672ULL;
int zero = 0;
unsigned int var_13 = 194538122U;
signed char var_14 = (signed char)-43;
int var_15 = -1710738120;
short var_16 = (short)-29949;
short var_17 = (short)-14986;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
