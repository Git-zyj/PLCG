#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
short var_5 = (short)31794;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)-37;
unsigned int var_14 = 4268599471U;
short var_16 = (short)-3354;
int zero = 0;
short var_17 = (short)10235;
unsigned int var_18 = 1824287567U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
