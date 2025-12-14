#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1635004303U;
unsigned long long int var_4 = 11192046726279398986ULL;
unsigned short var_9 = (unsigned short)1940;
unsigned short var_10 = (unsigned short)37471;
long long int var_11 = 3327149826352049814LL;
long long int var_13 = 91293469208142004LL;
int zero = 0;
short var_17 = (short)-25415;
unsigned short var_18 = (unsigned short)22657;
int var_19 = -244756448;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
