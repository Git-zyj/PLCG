#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3164;
short var_4 = (short)-28892;
int var_8 = -822720886;
long long int var_13 = -6406927020147929771LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1880042573U;
signed char var_18 = (signed char)16;
void init() {
}

void checksum() {
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
