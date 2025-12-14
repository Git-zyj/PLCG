#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29029;
long long int var_4 = 5934510091433458330LL;
unsigned short var_6 = (unsigned short)58608;
int var_8 = 984932559;
long long int var_11 = 4693218697881564882LL;
short var_13 = (short)20100;
unsigned char var_19 = (unsigned char)239;
int zero = 0;
unsigned int var_20 = 3910233069U;
long long int var_21 = -7341902088893767057LL;
long long int var_22 = 6909879142941964621LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
