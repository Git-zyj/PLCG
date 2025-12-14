#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
short var_1 = (short)-3528;
unsigned int var_2 = 286599208U;
short var_3 = (short)4536;
unsigned char var_4 = (unsigned char)172;
short var_5 = (short)19428;
short var_8 = (short)-31088;
short var_9 = (short)22789;
short var_12 = (short)-17805;
int zero = 0;
short var_13 = (short)-7737;
int var_14 = -143651475;
unsigned long long int var_15 = 3694275512335844226ULL;
signed char var_16 = (signed char)-44;
long long int var_17 = -7799195412240617564LL;
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
