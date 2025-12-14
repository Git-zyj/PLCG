#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5004128997110722784LL;
short var_1 = (short)-16346;
short var_3 = (short)18793;
int var_4 = 561177576;
int var_5 = -2088733000;
unsigned long long int var_6 = 4106003481060861965ULL;
int var_11 = 84542130;
int zero = 0;
unsigned long long int var_13 = 8868137205624833701ULL;
unsigned char var_14 = (unsigned char)134;
int var_15 = 9648578;
unsigned short var_16 = (unsigned short)24947;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
