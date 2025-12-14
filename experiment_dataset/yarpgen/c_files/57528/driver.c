#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)67;
unsigned short var_1 = (unsigned short)41483;
unsigned char var_9 = (unsigned char)138;
unsigned char var_12 = (unsigned char)187;
int zero = 0;
signed char var_14 = (signed char)10;
signed char var_15 = (signed char)-30;
unsigned int var_16 = 1922707148U;
void init() {
}

void checksum() {
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
