#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45160;
unsigned long long int var_5 = 15660892542495126533ULL;
unsigned short var_8 = (unsigned short)37432;
unsigned long long int var_9 = 7625410684895470969ULL;
unsigned short var_10 = (unsigned short)32829;
unsigned short var_11 = (unsigned short)8861;
int zero = 0;
unsigned long long int var_12 = 11914536518940441735ULL;
unsigned long long int var_13 = 6878983089918067501ULL;
unsigned long long int var_14 = 12517831283784093058ULL;
unsigned short var_15 = (unsigned short)59639;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
