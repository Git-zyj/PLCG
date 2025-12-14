#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13378983570872352357ULL;
int var_7 = 1524335351;
unsigned int var_8 = 4147241117U;
unsigned char var_11 = (unsigned char)97;
int var_13 = 1795142615;
int zero = 0;
unsigned short var_14 = (unsigned short)33680;
unsigned short var_15 = (unsigned short)7648;
unsigned int var_16 = 1419572956U;
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
