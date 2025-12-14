#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -127135612347563250LL;
unsigned char var_8 = (unsigned char)241;
unsigned int var_13 = 2078729511U;
unsigned char var_15 = (unsigned char)108;
unsigned short var_16 = (unsigned short)36882;
int zero = 0;
unsigned short var_17 = (unsigned short)19758;
unsigned long long int var_18 = 1233990269845412463ULL;
void init() {
}

void checksum() {
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
