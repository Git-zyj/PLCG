#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14038;
int var_3 = 1265381441;
int var_7 = -1275154799;
int zero = 0;
int var_17 = -1216623520;
short var_18 = (short)1449;
unsigned char var_19 = (unsigned char)185;
short var_20 = (short)-681;
void init() {
}

void checksum() {
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
