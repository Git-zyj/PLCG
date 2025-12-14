#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 594976028;
short var_5 = (short)-21392;
unsigned char var_6 = (unsigned char)170;
unsigned short var_9 = (unsigned short)16419;
unsigned int var_10 = 3512057378U;
int zero = 0;
unsigned char var_14 = (unsigned char)151;
unsigned int var_15 = 650278386U;
unsigned char var_16 = (unsigned char)129;
long long int var_17 = -1433500396300822225LL;
void init() {
}

void checksum() {
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
