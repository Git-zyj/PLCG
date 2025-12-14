#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned char var_1 = (unsigned char)124;
unsigned short var_2 = (unsigned short)23794;
unsigned char var_3 = (unsigned char)9;
unsigned short var_6 = (unsigned short)26714;
unsigned short var_8 = (unsigned short)60362;
unsigned short var_13 = (unsigned short)50111;
int zero = 0;
unsigned char var_15 = (unsigned char)4;
unsigned short var_16 = (unsigned short)29176;
unsigned short var_17 = (unsigned short)29423;
unsigned short var_18 = (unsigned short)18946;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
