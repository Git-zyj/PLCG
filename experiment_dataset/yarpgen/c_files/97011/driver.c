#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 935425773172211781ULL;
unsigned char var_1 = (unsigned char)58;
unsigned int var_4 = 4064787051U;
unsigned short var_10 = (unsigned short)3100;
unsigned int var_12 = 3398372298U;
int zero = 0;
unsigned short var_13 = (unsigned short)10820;
unsigned int var_14 = 3155556082U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
