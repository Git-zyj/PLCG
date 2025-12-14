#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3403518450654485033ULL;
int var_7 = -1472952989;
int var_8 = 233219773;
int zero = 0;
short var_10 = (short)31265;
int var_11 = 1394520241;
unsigned short var_12 = (unsigned short)3863;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
