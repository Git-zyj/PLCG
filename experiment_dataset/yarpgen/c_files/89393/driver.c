#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7617;
unsigned long long int var_3 = 8265180185991050267ULL;
unsigned char var_6 = (unsigned char)131;
short var_9 = (short)-17787;
unsigned long long int var_13 = 14593928088238570472ULL;
unsigned int var_15 = 3080484191U;
int zero = 0;
unsigned long long int var_16 = 730944022024396706ULL;
long long int var_17 = 4721594636802498478LL;
short var_18 = (short)-29222;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
