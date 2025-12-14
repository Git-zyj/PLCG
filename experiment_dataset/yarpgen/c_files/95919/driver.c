#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)59894;
unsigned char var_9 = (unsigned char)202;
unsigned short var_13 = (unsigned short)16632;
int var_15 = -1611691494;
unsigned int var_16 = 3841566533U;
int zero = 0;
signed char var_17 = (signed char)106;
unsigned int var_18 = 831860937U;
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
