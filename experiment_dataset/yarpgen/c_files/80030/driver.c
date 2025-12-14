#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3284919234U;
unsigned short var_4 = (unsigned short)64332;
unsigned int var_7 = 3132126990U;
unsigned long long int var_9 = 1254512694633191229ULL;
short var_12 = (short)6223;
int zero = 0;
unsigned char var_14 = (unsigned char)250;
unsigned short var_15 = (unsigned short)30666;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
