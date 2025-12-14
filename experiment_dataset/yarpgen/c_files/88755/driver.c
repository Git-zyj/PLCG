#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -927036621;
long long int var_3 = -9112820629206196474LL;
unsigned long long int var_4 = 15415200014703343526ULL;
unsigned short var_7 = (unsigned short)57179;
unsigned short var_9 = (unsigned short)49798;
int zero = 0;
int var_11 = 1097016774;
long long int var_12 = 7301396082606156278LL;
unsigned short var_13 = (unsigned short)35222;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
