#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)46056;
unsigned int var_7 = 208455342U;
unsigned char var_9 = (unsigned char)69;
int zero = 0;
unsigned short var_17 = (unsigned short)29503;
unsigned int var_18 = 2079371117U;
unsigned char var_19 = (unsigned char)237;
unsigned int var_20 = 2787146026U;
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
