#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
unsigned char var_3 = (unsigned char)11;
signed char var_4 = (signed char)-89;
long long int var_9 = -957404011600378675LL;
int zero = 0;
unsigned short var_15 = (unsigned short)43747;
short var_16 = (short)24864;
void init() {
}

void checksum() {
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
