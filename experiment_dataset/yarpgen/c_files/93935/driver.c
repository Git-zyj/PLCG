#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)127;
unsigned char var_3 = (unsigned char)240;
unsigned short var_4 = (unsigned short)19486;
signed char var_7 = (signed char)29;
unsigned char var_9 = (unsigned char)136;
signed char var_12 = (signed char)-94;
int zero = 0;
int var_14 = 658254857;
long long int var_15 = -5100902103647734447LL;
signed char var_16 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
