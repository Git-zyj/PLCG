#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
unsigned short var_1 = (unsigned short)31532;
short var_2 = (short)6858;
int var_4 = -1245353872;
signed char var_5 = (signed char)70;
unsigned long long int var_6 = 12348193508676290661ULL;
int var_7 = 369574523;
short var_8 = (short)-23932;
signed char var_12 = (signed char)103;
int zero = 0;
unsigned char var_13 = (unsigned char)47;
unsigned long long int var_14 = 6857213760723169083ULL;
long long int var_15 = -2321550727394005728LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
