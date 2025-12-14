#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41676;
short var_12 = (short)4282;
short var_15 = (short)-18188;
unsigned int var_16 = 2137111104U;
unsigned short var_18 = (unsigned short)60820;
int zero = 0;
long long int var_19 = 524536631244474656LL;
unsigned short var_20 = (unsigned short)27974;
void init() {
}

void checksum() {
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
