#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -884237767;
unsigned char var_5 = (unsigned char)34;
unsigned char var_8 = (unsigned char)72;
int zero = 0;
unsigned int var_20 = 4251878513U;
unsigned short var_21 = (unsigned short)17037;
unsigned short var_22 = (unsigned short)23527;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
