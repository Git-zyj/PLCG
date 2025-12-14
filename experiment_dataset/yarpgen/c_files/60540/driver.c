#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3258958791U;
signed char var_5 = (signed char)92;
unsigned int var_6 = 1281851934U;
unsigned long long int var_9 = 13865743652632036155ULL;
int var_10 = -1556970262;
unsigned long long int var_12 = 4050508271360134471ULL;
int zero = 0;
short var_14 = (short)20428;
unsigned short var_15 = (unsigned short)46947;
unsigned short var_16 = (unsigned short)57342;
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
