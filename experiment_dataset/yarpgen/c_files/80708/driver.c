#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
short var_4 = (short)-19955;
unsigned char var_5 = (unsigned char)253;
unsigned int var_7 = 3346103472U;
unsigned short var_9 = (unsigned short)12818;
int zero = 0;
unsigned int var_11 = 2438987416U;
unsigned short var_12 = (unsigned short)39147;
int var_13 = -958927272;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
