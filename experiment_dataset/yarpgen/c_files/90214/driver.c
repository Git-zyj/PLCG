#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 650602283U;
unsigned char var_1 = (unsigned char)246;
int var_4 = -254891907;
unsigned long long int var_5 = 17737809443104996193ULL;
unsigned long long int var_7 = 5210203829933050718ULL;
unsigned short var_8 = (unsigned short)48049;
int zero = 0;
int var_10 = -1455203783;
unsigned long long int var_11 = 766632676138248226ULL;
short var_12 = (short)13345;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
