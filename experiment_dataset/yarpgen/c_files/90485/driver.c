#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4968387487763504722ULL;
long long int var_5 = 8449834293900828281LL;
short var_8 = (short)-1667;
short var_9 = (short)7888;
int zero = 0;
unsigned char var_12 = (unsigned char)143;
unsigned int var_13 = 2742406181U;
unsigned short var_14 = (unsigned short)15655;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
