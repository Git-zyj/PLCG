#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1234390400;
unsigned long long int var_1 = 10202159581548788267ULL;
unsigned char var_4 = (unsigned char)52;
unsigned int var_8 = 4268635950U;
unsigned int var_10 = 3961817817U;
unsigned short var_11 = (unsigned short)29605;
unsigned int var_12 = 1698155175U;
int zero = 0;
long long int var_13 = 5673944508667156511LL;
long long int var_14 = 829746727587074995LL;
long long int var_15 = -4382715989153525320LL;
signed char var_16 = (signed char)-14;
unsigned short var_17 = (unsigned short)15650;
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
