#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10648;
unsigned int var_4 = 1582474338U;
unsigned char var_6 = (unsigned char)199;
signed char var_8 = (signed char)-90;
long long int var_12 = -3908044874856847979LL;
int zero = 0;
unsigned int var_15 = 2291340174U;
long long int var_16 = 1682702897937957031LL;
unsigned int var_17 = 2344460113U;
int var_18 = -22949091;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
