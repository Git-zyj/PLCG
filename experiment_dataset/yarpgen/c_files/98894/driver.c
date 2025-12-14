#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1107632239378419888LL;
long long int var_2 = -8859206656664280469LL;
long long int var_4 = 3700745076876586753LL;
unsigned char var_9 = (unsigned char)171;
long long int var_10 = 6013425074324402277LL;
int var_11 = -1318679360;
int var_12 = 1051184162;
int zero = 0;
int var_16 = 874189905;
short var_17 = (short)26386;
void init() {
}

void checksum() {
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
