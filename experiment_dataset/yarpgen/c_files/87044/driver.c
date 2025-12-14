#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17052;
short var_2 = (short)-12679;
unsigned char var_5 = (unsigned char)107;
unsigned long long int var_8 = 540341235285686255ULL;
unsigned int var_9 = 2045545518U;
unsigned short var_11 = (unsigned short)20392;
unsigned char var_14 = (unsigned char)191;
int zero = 0;
unsigned long long int var_15 = 3579633479574974737ULL;
unsigned long long int var_16 = 6435117794801218360ULL;
unsigned short var_17 = (unsigned short)23597;
unsigned short var_18 = (unsigned short)61539;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
