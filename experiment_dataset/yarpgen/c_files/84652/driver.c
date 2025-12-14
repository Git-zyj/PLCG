#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3636342977U;
_Bool var_5 = (_Bool)0;
short var_6 = (short)2506;
int var_9 = 625071113;
unsigned char var_13 = (unsigned char)26;
int var_14 = -1097202853;
int zero = 0;
unsigned long long int var_15 = 10964666227505099941ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)62065;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
