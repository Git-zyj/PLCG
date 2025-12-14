#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24006;
short var_1 = (short)8662;
unsigned char var_2 = (unsigned char)78;
unsigned char var_3 = (unsigned char)192;
unsigned int var_5 = 3288448410U;
long long int var_8 = 1772926663920673246LL;
unsigned short var_9 = (unsigned short)36447;
short var_10 = (short)-4246;
long long int var_11 = -4494271326749243233LL;
unsigned short var_12 = (unsigned short)20223;
long long int var_14 = 2791867657190113647LL;
int zero = 0;
unsigned int var_16 = 3136059546U;
long long int var_17 = 233408945322507614LL;
short var_18 = (short)-13307;
unsigned short var_19 = (unsigned short)225;
unsigned int var_20 = 2335595593U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
